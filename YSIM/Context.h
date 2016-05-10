#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include "UIHandler.h"
#include "PoopCollector.h"
#include "BatchRenderer.h"

class Context {
private:
	sf::RenderWindow* m_Window;
	sf::View* m_View;
	sf::View m_DefaultView;
	UIHandler* m_UIHandler;
	BatchRenderer m_BatchRender;

	PoopCollector m_PoopCollector;
public:
	Context(sf::RenderWindow* window);
	~Context();

	void update();
	void render();

	int addVertex(sf::Vertex* v) { return m_BatchRender.add(v); }

	PoopCollector* getPoopCollector() { return &m_PoopCollector; }

	sf::RenderWindow* getWindow() { return m_Window; }
	BatchRenderer* getBatch() { return &m_BatchRender; }
};