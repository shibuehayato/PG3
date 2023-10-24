#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include "Enemy.h"
#include <memory>

int main() {

	std::unique_ptr<Enemy> enemy_;
	enemy_->Update();

	return 0;
}