#include "PoopCollector.h"

PoopCollector::PoopCollector(BatchRenderer* renderer)
	: m_Label(renderer)
{
	m_Label.setPosition(sf::Vector2f(200.0f, 0.0f));
}

PoopCollector::~PoopCollector()
{
}

void PoopCollector::addPooper(Pooper* p)
{
	m_Poopers.push_back(p);
}

void PoopCollector::update()
{
	for (unsigned int i = 0; i < m_Poopers.size(); ++i)
	{
		m_TotalPoop += m_Poopers[i]->getShitPerUpdate();
		m_Label.setText(std::to_string((int)m_TotalPoop) + " Poops");
	}
}

void PoopCollector::setLabel(Label label)
{

}