#include "IShape.h"
#include <stdio.h>

void IShape::Size() {}

void IShape::Draw()
{
	printf("面積は%fcm²\n", result);
}