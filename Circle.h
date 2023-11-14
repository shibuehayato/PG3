﻿#pragma once
#include "IShape.h"

class Circle : public IShape
{
public:
	void Size() override;
	void Draw() override;

private:
	float radius = 20.0f;
	float result = 0;
};

