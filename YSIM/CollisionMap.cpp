#include "CollisionMap.h"

void CollisionMap::addItem(UpdatableItems* item)
{
	m_Items.push_back(item);
}

void CollisionMap::update(sf::Vector2i mouse)
{
	for(int i = 0; i < m_Items.size(); ++i)
	{
		if (Collision::collide(mouse, m_Items[i]->getCoordinates(), m_Items[i]->getSize()))
			m_Items[i]->update();
		else
			m_Items[i]->OnIdle();
	}
}