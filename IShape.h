#pragma once
class IShape
{
public:
	virtual void Size() = 0;
	virtual void Draw() = 0;

protected:
	float radius = 20.0f;
	float side = 10.0f;
	float result = 0;
};