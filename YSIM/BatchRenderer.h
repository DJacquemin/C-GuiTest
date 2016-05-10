#pragma once

#include <SFML/Graphics.hpp>
#include "Constants.h"

class BatchRenderer
{
private :
	sf::RenderWindow* m_Window;

	std::vector<sf::Sprite> m_Sprites;
	std::vector<sf::Text*> m_Texts;

	sf::VertexArray m_Vertices;
	sf::Texture m_Tileset;
public :
	BatchRenderer();

	void draw();

	void add(sf::Sprite sprite);
	void add(sf::Text* text);
	int add(sf::Vertex* vertex);

	void setWindow(sf::RenderWindow* window) { m_Window = window; }
	sf::Vertex* getVertex(int id);
};