#pragma once
#include "IShape.h"

class Rectangle : public IShape
{
public:
	void Size() override;
	void Draw() override;

private:
	float vertical = 10.0f;
	float beside = 5.0f;
	float result = 0;
};

