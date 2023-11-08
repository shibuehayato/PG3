#include <stdio.h>
#include "Minimum.h"

int main()
{
	Minimum<int, int> b1(3, 2);
	Minimum<float, float> b2(4.0f, 10.0f);
	Minimum<double, double> b3(0.05, 0.007);
	Minimum<int, float> b4(8, 9.0f);
	Minimum<int, double> b5(3, 5.0);
	Minimum<float, double> b6(6.0f, 0.05);

	printf("%d\n", b1.Min());
	printf("%f\n", b2.Min());
	printf("%lf\n", b3.Min());
	printf("%d\n", b4.Min());
	printf("%d\n", b5.Min());
	printf("%lf\n", b6.Min());
	return 0;
}