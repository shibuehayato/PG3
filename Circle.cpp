#include "Circle.h"

void Circle::Size()
{
	result = radius * radius * 3.14;
}

void Circle::Draw()
{
	IShape::Draw();
}