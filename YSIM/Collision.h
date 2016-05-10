#pragma once

#include <SFML/System/Vector2.hpp>

class Collision
{
public:
	static bool collide(sf::Vector2i point, sf::Vector2f rectCoord, sf::Vector2f size);
	static bool collide(sf::Vector2f point, sf::Vector2f rectCoord, sf::Vector2f size);
};