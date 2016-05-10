#pragma once

#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics/Vertex.hpp>
#include "BatchRenderer.h"

class StaticElement
{
public:
	StaticElement(sf::Vector2f coordinates, sf::Vector2f size, sf::Vector2f textCoord, sf::Vector2f textSize, BatchRenderer* renderer);
};