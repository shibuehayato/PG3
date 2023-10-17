#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <time.h>
#include <functional>

typedef void (*PFunc)(int,int);

// コールバック関数
void DiceResult(int result, int prediction)
{
	if (result == 1 || result == 3 || result == 5)
	{
		if (prediction == 1)
		{
			printf("出目が%dで奇数だから正解です\n",result);
		}
		if (prediction == 2)
		{
			printf("出目が%dで奇数だから不正解です\n", result);
		}
	}

	if (result == 2 || result == 4 || result == 6)
	{
		if (prediction == 1)
		{
			printf("出目が%dで偶数だから不正解です\n",result);
		}
		if (prediction == 2)
		{
			printf("出目が%dで偶数だから正解です\n", result);
		}
	}
}

void setTimeout(PFunc p, int result, int prediction)
{
	Sleep(3 * 1000);
	p(result, prediction);
}

int main() {
	unsigned int currentTime = time(nullptr);
	srand(currentTime);

	int result = rand() % 6 + 1 ;
	// ラムダ式
	auto fx = [=]() {return result; };

	int prediction;
	printf("奇数なら1,偶数なら2を入力してください\n");
	scanf_s("%d",&prediction);

	// std::function
	std::function<int(int)> fx2 = [=](int i) {return i; };

	PFunc p;
	p = DiceResult;
	setTimeout(p, fx(), fx2(prediction));


	return 0;
}