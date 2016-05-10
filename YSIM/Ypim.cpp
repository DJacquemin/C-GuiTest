#include <SFML/Graphics.hpp>

#include <iostream>
#include <time.h>
#include <thread>

#include "Constants.h"
#include "Context.h"

void renderingThread(Context *context)
{
	sf::RenderWindow *window = context->getWindow();

	while (window->isOpen())
	{
		context->render();
	}
}

int main()
{
	sf::ContextSettings settings;
	settings.antialiasingLevel = 8; // <-------------------- a modifier

	sf::RenderWindow window(sf::VideoMode(WINDOW_SCREEN_WIDTH, WINDOW_SCREEN_HEIGHT), "YSIM", sf::Style::Close, settings);
	//window.setVerticalSyncEnabled(true);
	window.setActive(false);

	sf::Clock UPSClock;
	double UPSTimer = 0;
	double UPSLimit = 1000000.0 / 60.0;

	Context context(&window);

	sf::Thread thread(&renderingThread, &context);
	thread.launch();

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		UPSTimer += UPSClock.getElapsedTime().asMicroseconds();
		UPSClock.restart();
		if (UPSTimer >= UPSLimit)
		{
			context.update();
			UPSTimer = 0;
		}
	}

	return 0;
}