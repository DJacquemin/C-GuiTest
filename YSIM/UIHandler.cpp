#include "UIHandler.h"
#include "Context.h"

UIHandler::UIHandler(Context* context)
	: m_Context(context)
{
	StaticElement s(sf::Vector2f(0, 2*WINDOW_SCREEN_HEIGHT/3), sf::Vector2f(WINDOW_SCREEN_WIDTH, WINDOW_SCREEN_HEIGHT/3), 
		TEXTURE_DEFAULT_STATIC_ITEM, TEXTURE_DEFAULT_STATIC_ITEM_SIZE, context->getBatch());

	m_IpsCounter = new Label(m_Context->getBatch());

	coucou = new Label(m_Context->getBatch());
	coucou->setText("coucou");
	coucou->setPosition(sf::Vector2f(400.0f, 0.0f));
	m_CollisionMap.addItem(new Button(sf::Vector2f(WINDOW_SCREEN_WIDTH / 4, WINDOW_SCREEN_HEIGHT - WINDOW_SCREEN_HEIGHT / 10), context->getBatch()));
	m_CollisionMap.addItem(new UIList(sf::Vector2f(0, WINDOW_SCREEN_HEIGHT / 2), sf::Vector2f(WINDOW_SCREEN_WIDTH / 5, WINDOW_SCREEN_HEIGHT), context->getBatch()));
}

void UIHandler::update()
{
	m_CollisionMap.update(sf::Mouse::getPosition(*m_Context->getWindow()));
	//m_PoopOMeter->setText(std::to_string(m_Context->getTotalPoop()) + " Poops");
}