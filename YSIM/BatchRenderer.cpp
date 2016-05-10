#include "BatchRenderer.h"

BatchRenderer::BatchRenderer()
{
	if (!m_Tileset.loadFromFile(GRAPHICS_DEFAULT_TILE_FILE_PATH));

	m_Vertices.setPrimitiveType(sf::Quads);
}

void BatchRenderer::add(sf::Sprite sprite)
{
	m_Sprites.push_back(sprite);
}

void BatchRenderer::add(sf::Text* text)
{
	m_Texts.push_back(text);
}

int BatchRenderer::add(sf::Vertex* vertex)
{
	m_Vertices.resize(m_Vertices.getVertexCount() + 4);
	sf::Vertex* quad = &m_Vertices[m_Vertices.getVertexCount() - 4];
	quad[0].position = vertex[0].position;
	quad[1].position = vertex[1].position;
	quad[2].position = vertex[2].position;
	quad[3].position = vertex[3].position;

	// define its 4 texture coordinates
	quad[0].texCoords = vertex[0].texCoords;
	quad[1].texCoords = vertex[1].texCoords;
	quad[2].texCoords = vertex[2].texCoords;
	quad[3].texCoords = vertex[3].texCoords;

	return m_Vertices.getVertexCount() - 4;
}

sf::Vertex* BatchRenderer::getVertex(int id)
{
	return &m_Vertices[id];
}

void BatchRenderer::draw()
{
	sf::RenderStates states;
	states.texture = &m_Tileset;

	m_Window->draw(m_Vertices, states);
	
	for (unsigned int i = 0; i < m_Sprites.size(); ++i)
	{
		m_Window->draw(m_Sprites[i]);
	}

	for (unsigned int i = 0; i < m_Texts.size(); ++i)
	{
		m_Window->draw(*m_Texts[i]);
	}
}