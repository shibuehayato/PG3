#include <stdio.h>
#include "Car.h";
#include "Bike.h";
#include <memory>

int main()
{
	std::unique_ptr<Car> car_;
	car_ = std::make_unique<Car>();
	std::unique_ptr<Bike> bike_;
	bike_ = std::make_unique<Bike>();

	printf("行動\n\n");
	car_->Run();
	bike_->Run();

	return 0;
}