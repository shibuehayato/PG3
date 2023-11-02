#include "Enemy.h"
#include <stdio.h>
#include <Windows.h>

void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Shoot,
	&Enemy::Leave,
};

void Enemy::Approach()
{
	printf("‹ßÚ\n");
	Sleep(3 * 1000);
	phase_ = Phase::SHOOT;
}

void Enemy::Shoot()
{
	printf("ŽËŒ‚\n");
	Sleep(3 * 1000);
	phase_ = Phase::LEAVE;
}

void Enemy::Leave()
{
	printf("—£’E\n");
}

void Enemy::Update()
{
	(this->*spFuncTable[static_cast<size_t>(phase_)])();
}