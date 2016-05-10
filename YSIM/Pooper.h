#pragma once

#include "IUpdatable.h"
#include "IRenderable.h"

class Pooper : public IUpdatable, public IRenderable 
{
protected:
	int m_Level;
	double m_PoopPerUpdate;
public:
	Pooper() 
		: m_PoopPerUpdate(0.016666), m_Level(1){}

	void update() override {}
	void add(BatchRenderer* renderer) override {}

	inline double getShitPerUpdate() const { return m_PoopPerUpdate; }
};