#pragma once

#include <vector>
#include "ListItem.h"
#include "UpdatableItems.h"
#include "BatchRenderer.h"
#include "IHoverable.h"

class UIList : public UpdatableItems, public IHoverable
{
private:
	std::vector<ListItem> m_Items;
	BatchRenderer* m_Renderer;
	int m_RendererId;
public:
	UIList(sf::Vector2f coordinates, sf::Vector2f size, BatchRenderer* renderer);

	void update() override;

	void OnIdle() override;
	void OnHover() override;

	void addItem(ListItem);
private:
	void changeTexture(sf::Vertex* v, sf::Vector2f newTexture);
};