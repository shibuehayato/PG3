#pragma once

template <typename Type1, typename Type2>
class Minimum
{
public:
	Type1 Min(Type1 a, Type2 b);
	 
	Minimum(Type1 a, Type2 b) : a(a), b(b) {};
	Type1 Size();
private:
	Type1 a_;
	Type2 b_;
};

