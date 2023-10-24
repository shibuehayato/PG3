#pragma once
class Enemy
{
private:
	enum class Phase {
		Approach, 
		Shoot,
		Leave
	};

public:
	void Update();

private:
	void Approach();
	void Shoot();
	void Leave();

private:
	Phase phase_ = Phase::Approach;

private:
	static void (Enemy::* spFuncTable[])();
};

