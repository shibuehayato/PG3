#include "Minimum.h"

template <typename Type1, typename Type2>

Type1 Min(Type1 a, Type2 b)
{
	if (a < b)
	{
		return static_cast<Type1>(a);
	}

	if (a > b)
	{
		return static_cast<Type2>(b);
	}
}