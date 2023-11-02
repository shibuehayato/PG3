#pragma once
class Enemy
{
private:
	enum class Phase {
		APPROACH, 
		SHOOT,
		LEAVE
	};

public:
	void Update();

private:
	void Approach();
	void Shoot();
	void Leave();

private:
	Phase phase_ = Phase::APPROACH;
private:
	static void (Enemy::* spFuncTable[])();
};

