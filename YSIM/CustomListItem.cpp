#include "CustomListItem.h"

CustomListItem::CustomListItem(sf::Vector2f coordinates, sf::Vector2f size, BatchRenderer* renderer)
	: ListItem(coordinates, size, renderer)
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

void CustomListItem::update()
{

}

void CustomListItem::OnIdle()
{
	changeTexture(m_Renderer->getVertex(m_RendererId), TEXTURE_DEFAULT_BUTTON_IDLE);
}

void CustomListItem::OnClick()
{
	changeTexture(m_Renderer->getVertex(m_RendererId), TEXTURE_DEFAULT_BUTTON_ONCLICK);
}

void CustomListItem::OnHover()
{
	changeTexture(m_Renderer->getVertex(m_RendererId), TEXTURE_DEFAULT_BUTTON_HOVER);
}

void CustomListItem::changeTexture(sf::Vertex* v, sf::Vector2f newTexture)
{
	v[0].texCoords = newTexture;
	v[1].texCoords = sf::Vector2f(newTexture.x + 64, newTexture.y);
	v[2].texCoords = sf::Vector2f(newTexture.x + 64, newTexture.y + 32);
	v[3].texCoords = sf::Vector2f(newTexture.x, newTexture.y + 32);
}