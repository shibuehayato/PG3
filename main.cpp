#include <stdio.h>
#include "Car.h";
#include "Bike.h";

int main()
{

	Car* car_ = nullptr;
	car_ = new Car();
	Bike* bike_ = nullptr;
	bike_ = new Bike();

	printf("行動\n\n");
	car_->Run();
	bike_->Run();

	return 0;
}