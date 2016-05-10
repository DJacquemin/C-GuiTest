#pragma once

#include "UpdatableItems.h"
#include "BatchRenderer.h"
#include "IClickable.h"
#include "IHoverable.h"

class ListItem : public UpdatableItems, public IClickable, public IHoverable
{
protected:
	BatchRenderer* m_Renderer;
	int m_RendererId;
public:
	ListItem(sf::Vector2f coordinates, sf::Vector2f size, BatchRenderer* renderer)
		: UpdatableItems(coordinates, size), m_Renderer(renderer){}

	void update() override {}
	void OnIdle() override {}
	void OnClick() override {}
	void OnHover() override {}
};