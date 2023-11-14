#include "Circle.h"
#include <stdio.h>

void Circle::Size()
{
	result = radius * radius * 3.14;
}

void Circle::Draw()
{
	printf("円の面積は%fcm^2\n", result);
}