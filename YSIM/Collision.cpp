#include "Collision.h"

bool Collision::collide(sf::Vector2i point, sf::Vector2f rectCoord, sf::Vector2f size)
{
	if (point.x < rectCoord.x)
		return false;
	if (point.x > rectCoord.x + size.x)
		return false;
	if (point.y < rectCoord.y)
		return false;
	if (point.y > rectCoord.y + size.y)
		return false;
	return true;
}

bool Collision::collide(sf::Vector2f point, sf::Vector2f rectCoord, sf::Vector2f size)
{
	if (point.x < rectCoord.x)
		return false;
	if (point.x > rectCoord.x + size.x)
		return false;
	if (point.y < rectCoord.y)
		return false;
	if (point.y > rectCoord.y + size.y)
		return false;
	return true;
}