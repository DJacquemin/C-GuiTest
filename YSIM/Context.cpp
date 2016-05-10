#include "Context.h"

Context::Context(sf::RenderWindow* window)
	: m_Window(window), m_PoopCollector(&m_BatchRender)
{
	m_View = new sf::View(sf::Vector2f(0.0f, 0.0f), sf::Vector2f(WINDOW_SCREEN_WIDTH, WINDOW_SCREEN_HEIGHT));
	m_DefaultView = m_Window->getDefaultView();

	m_UIHandler = new UIHandler(this);
	m_BatchRender.setWindow(window);

	m_PoopCollector.addPooper(new Pooper());
}

Context::~Context()
{
	delete m_UIHandler;
	delete m_View;
}

void Context::update()
{
	m_PoopCollector.update();
	m_UIHandler->update();
}

void Context::render()
{
	m_UIHandler->clockRestart();

	m_Window->clear();

	m_BatchRender.draw();
	//game view drawing
	//m_Window->setView(*m_View);
	//Game rendering


	//GUI and static part
	m_Window->setView(m_DefaultView);

	m_Window->display();

	m_UIHandler->ipsCounterString();
}