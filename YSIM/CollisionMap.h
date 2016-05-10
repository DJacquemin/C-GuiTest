#pragma once

#include <vector>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Mouse.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include "UpdatableItems.h"
#include "Collision.h"

class CollisionMap
{
private:
	std::vector<UpdatableItems*> m_Items;
public:
	void addItem(UpdatableItems* item);
	void update(sf::Vector2i mouse);
};