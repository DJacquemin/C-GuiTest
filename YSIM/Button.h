#pragma once

#include <SFML/Graphics.hpp>
#include "IClickable.h"
#include "IRenderable.h"
#include "UpdatableItems.h"
#include "IHoverable.h"
#include "Collision.h"

class Button : public UpdatableItems, public IClickable, public IHoverable
{
private :
	BatchRenderer* m_Renderer;
	int m_RendererId;
public :
	Button(sf::Vector2f pos, BatchRenderer* renderer);

	void update();

	void OnClick() override;
	void OnHover() override;
	void OnIdle() override;
private :
	void changeTexture(sf::Vertex* v, sf::Vector2f newTexture);
};