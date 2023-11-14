#include "Rectangle.h"
#include <stdio.h>

void Rectangle::Size()
{
	result = vertical * beside;
}

void Rectangle::Draw()
{
	printf("矩形の面積は%fcm^2\n", result);
}