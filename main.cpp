#include <stdio.h>

template <typename Type>
Type Min(Type a, Type b) {
	if (a < b)
	{
		return static_cast<Type>(a);
	}

	if (a > b)
	{
		return static_cast<Type>(b);
	}
}

template <>
char Min<char>(char a, char b)
{
	return printf("数字以外は代入できません\n");
}

int main()
{
	printf("%d\n", Min<int>(10, 5));
	printf("%f\n", Min<float>(10.0f, 5.0f));
	printf("%lf\n", Min<double>(5.5, 10.5));

	char a = 'a';
	char b = 'b';
	Min<char>(a, b);

	return 0;
}