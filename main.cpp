#include <stdio.h>
#include <memory>
#include "Circle.h"
#include "Rectangle.h"

int main()
{
	std::unique_ptr<Circle> circle_;
	circle_ = std::make_unique<Circle>();
	std::unique_ptr<Rectangle> rectangle_;
	rectangle_ = std::make_unique<Rectangle>();
	
	circle_->Size();
	circle_->Draw();
	rectangle_->Size();
	rectangle_->Draw();

	return 0;
}