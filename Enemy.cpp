#include "Enemy.h"
#include <stdio.h>
#include <Windows.h>

void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Shoot,
	&Enemy::Leave
};

void Enemy::Approach()
{
	printf("‹ßÚ\n");
	Sleep(3 * 1000);
}

void Enemy::Shoot()
{
	printf("ËŒ‚\n");
	Sleep(3 * 1000);
}

void Enemy::Leave()
{
	printf("—£’E\n");
}

void Enemy::Update()
{
	static_cast<size_t>(phase_);

	(this->*spFuncTable[0])();
	(this->*spFuncTable[1])();
	(this->*spFuncTable[2])();
}