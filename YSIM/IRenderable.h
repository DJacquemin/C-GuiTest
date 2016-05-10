#pragma once

#include "BatchRenderer.h"

__interface IRenderable 
{
	void add(BatchRenderer* renderer);
};