#include "StaticElement.h"

StaticElement::StaticElement(sf::Vector2f coordinates, sf::Vector2f size, sf::Vector2f textCoord, sf::Vector2f textSize, BatchRenderer* renderer)
{
	sf::Vertex v[4];
	v[0].position = coordinates;
	v[1].position = sf::Vector2f(coordinates.x + size.x, coordinates.y);
	v[2].position = sf::Vector2f(coordinates.x + size.x, coordinates.y + size.y);
	v[3].position = sf::Vector2f(coordinates.x, coordinates.y + size.y);

	v[0].texCoords = textCoord;
	v[1].texCoords = sf::Vector2f(textCoord.x + textSize.x, textCoord.y);
	v[2].texCoords = sf::Vector2f(textCoord.x + textSize.x, textCoord.y + textSize.y);
	v[3].texCoords = sf::Vector2f(textCoord.x, textCoord.y + textSize.y);

	renderer->add(v);
}