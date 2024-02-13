#include <stdio.h>
#include <string>
#include <algorithm>
#include <iostream>
#include <thread>
#include <time.h>
#include <Windows.h>
#include <time.h>

using namespace std;

int main()
{
	Sleep(2 * 1000);

	// コピーの前の時間を記録する
	auto start = chrono::steady_clock::now();

	string a(100000, 'a');

	// 文字列のコピーを作成する
	string copiedA = a;
	// コピーの後の時間を記録する
	auto end = chrono::steady_clock::now();
	// 経過時間を計算する
	auto elapsedTimeCopy = chrono::duration_cast<chrono::microseconds>(end - start);

	// 移動の前の時間を記録する
	start = chrono::steady_clock::now();
	// 文字列の移動を作成する
	string moveA = move(a);
	// 移動の後の時間を記録する
	end = std::chrono::steady_clock::now();
	// 経過時間を計算する
	auto elapsedTimeMove = chrono::duration_cast<chrono::microseconds>(end - start);
	
	cout << "100,000文字を移動とコピーで比較しました。\n";
	cout << "コピー : " << elapsedTimeCopy.count() << "μs\n";
	cout << "移動 : " << elapsedTimeMove.count() << "μs\n";

	return 0;
}