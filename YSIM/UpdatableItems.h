#pragma once

#include <SFML/System/Vector2.hpp>
#include "IUpdatable.h"
#include "IIdlable.h"

class UpdatableItems : public IUpdatable, public IIdlable
{
protected:
	sf::Vector2f m_Coordinates;
	sf::Vector2f m_Size;
public:
	UpdatableItems(sf::Vector2f coordinates, sf::Vector2f size)
		: m_Coordinates(coordinates), m_Size(size){}

	sf::Vector2f getCoordinates(){ return m_Coordinates; }
	sf::Vector2f getSize(){ return m_Size; }
};