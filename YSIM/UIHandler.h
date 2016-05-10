#pragma once

#include <SFML/Graphics.hpp>
#include "Label.h"
#include "IUpdatable.h"
#include "Button.h"
#include "StaticElement.h"
#include "UIList.h"
#include "CollisionMap.h"

class Context; //eviter les dependances circulaires
class UIHandler : public IUpdatable
{
private:
	//--------IPS----------
	sf::Clock clock;
	sf::Clock particleClock;
	sf::Time particleElapsed;
	sf::Font font_helsinki;
	Label* m_IpsCounter;
	//---------------------

	Context* m_Context;

	Label* coucou;
	CollisionMap m_CollisionMap;
public:
	UIHandler(Context* context);

	void update() override;

	//ips handling
	void clockRestart() { clock.restart(); }
	void ipsCounterString() { m_IpsCounter->setText(std::to_string(1.0f / clock.getElapsedTime().asSeconds())); }
};