#include <stdio.h>

int Recursive(int num, int money) {
	if (num <= 0)
	{
		return (0);
	}

	return (money + Recursive(num - 1, money * 2 - 50));
}

int main() {
	int num = 8;

	int Normal = 1072 * num;

	int money = 100;
	int result;
	result = Recursive(num, money);
	printf("一般的は%d時間働くと%d稼げる\n", num, Normal);
	printf("再帰的は%d時間働くと%d稼げる\n", num,result);
	return 0;
}