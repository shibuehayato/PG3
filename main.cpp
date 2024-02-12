#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <thread>

using namespace std;

void Thread1() {
	printf("thread 1\n");
}
void Thread2() {
	printf("thread 2\n");
}
void Thread3() {
	printf("thread 3\n");
}

int main()
{
	thread th1(Thread1);
	th1.join();
	thread th2(Thread2);
	th2.join();
	thread th3(Thread3);
	th3.join();
	return 0;
}