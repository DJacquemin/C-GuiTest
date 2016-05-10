#pragma once

#include "ListItem.h"

class CustomListItem : public ListItem
{
public:
	CustomListItem(sf::Vector2f coordinates, sf::Vector2f size, BatchRenderer* renderer);

	void update() override;

	void OnIdle() override;
	void OnClick() override;
	void OnHover() override;
private:
	void changeTexture(sf::Vertex* v, sf::Vector2f newTexture);
};