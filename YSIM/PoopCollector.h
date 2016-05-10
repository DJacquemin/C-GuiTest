#pragma once

#include <vector>
#include "IUpdatable.h"
#include "Pooper.h"
#include "Label.h"

class PoopCollector : public IUpdatable
{
private :
	double m_TotalPoop;
	std::vector<Pooper*> m_Poopers;
	Label m_Label;
public :
	PoopCollector(BatchRenderer* renderer);
	~PoopCollector();

	void update() override;

	void addPooper(Pooper* pooper);
	void setLabel(Label label);
};