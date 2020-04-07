#include <iostream>
#include <conio.h>

using namespace std;

int climbStairs(int n) {

	if (n == 1 || n == 2) {
		return n;
	}

	int t1 = 1, t2 = 2;
	int result = 0;
	for (int i = 2; i < n; i++) {
		result = t1 + t2;
		t1 = t2;
		t2 = result;
	}
	return result;
}

int main() {
	cout << climbStairs(5);
	_getch();
	return 0;
}