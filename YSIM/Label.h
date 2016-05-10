#pragma once

#include <string>
#include <SFML/Graphics/Text.hpp>
#include "IRenderable.h"
#include "Constants.h"

class Label 
{
protected:
	sf::Vector2f m_Coordinates;
	sf::Font f;
	sf::Text m_Text;
public:
	Label(BatchRenderer* renderer);

	void setFontSize(int size) { m_Text.setCharacterSize(size); }
	void setTextColor(sf::Color color) { m_Text.setColor(color); }
	void setPosition(sf::Vector2f pos) { m_Text.setPosition(pos); }
	void setText(std::string text) { m_Text.setString(text); }
	void setFont(sf::Font font) { m_Text.setFont(font); }
};