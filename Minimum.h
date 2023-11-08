#pragma once

template <typename Type1, typename Type2>
class Minimum
{
public:
	Minimum(Type1 a, Type2 b) :a(a), b(b) {}
	Type1 Min() {
		if (a < b)
		{
			return static_cast<Type1>(a);
		}
		return static_cast<Type1>(b);
	}
	Type1 a;
	Type2 b;
};

