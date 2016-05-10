#include "Button.h"
#include <iostream>

Button::Button(sf::Vector2f pos, BatchRenderer* renderer)
	: UpdatableItems(pos, TEXTURE_DEFAULT_BUTTON_SIZE), m_Renderer(renderer)
{
	sf::Vertex v[4];
	v[0].position = sf::Vector2f(m_Coordinates.x, m_Coordinates.y);
	v[1].position = sf::Vector2f(m_Coordinates.x + m_Size.x, m_Coordinates.y);
	v[2].position = sf::Vector2f(m_Coordinates.x + m_Size.x, m_Coordinates.y + m_Size.y);
	v[3].position = sf::Vector2f(m_Coordinates.x, m_Coordinates.y + m_Size.y);

	v[0].texCoords = sf::Vector2f(TEXTURE_DEFAULT_BUTTON_IDLE);
	v[1].texCoords = sf::Vector2f(TEXTURE_DEFAULT_BUTTON_IDLE.x + TEXTURE_DEFAULT_BUTTON_SIZE.x, TEXTURE_DEFAULT_BUTTON_IDLE.y);
	v[2].texCoords = sf::Vector2f(TEXTURE_DEFAULT_BUTTON_IDLE.x + TEXTURE_DEFAULT_BUTTON_SIZE.x, TEXTURE_DEFAULT_BUTTON_IDLE.y + TEXTURE_DEFAULT_BUTTON_SIZE.y);
	v[3].texCoords = sf::Vector2f(TEXTURE_DEFAULT_BUTTON_IDLE.x, TEXTURE_DEFAULT_BUTTON_IDLE.y + TEXTURE_DEFAULT_BUTTON_SIZE.y);

	m_RendererId = renderer->add(v);
}

void Button::update()
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		OnClick();
	else
		OnHover();
}

void Button::OnClick()
{
	changeTexture(m_Renderer->getVertex(m_RendererId), TEXTURE_DEFAULT_BUTTON_ONCLICK);
}

void Button::OnHover()
{
	changeTexture(m_Renderer->getVertex(m_RendererId), TEXTURE_DEFAULT_BUTTON_HOVER);
}

void Button::OnIdle()
{
	changeTexture(m_Renderer->getVertex(m_RendererId), TEXTURE_DEFAULT_BUTTON_IDLE);
}

void Button::changeTexture(sf::Vertex* v, sf::Vector2f newTexture)
{
	v[0].texCoords = newTexture;
	v[1].texCoords = sf::Vector2f(newTexture.x + m_Size.x, newTexture.y);
	v[2].texCoords = sf::Vector2f(newTexture.x + m_Size.x, newTexture.y + m_Size.y);
	v[3].texCoords = sf::Vector2f(newTexture.x, m_Size.y + newTexture.y);
}