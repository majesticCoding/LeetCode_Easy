#include <iostream>
#include <conio.h>

using namespace std;

int climbStairs(int n) {

	if (n == 1 || n == 2) {
		return n;
	}

	int* A = new int[n];
	A[0] = 1; A[1] = 2;
	for (int i = 2; i < n; i++) {
		A[i] = A[i - 1] + A[i - 2];
	}
	int result = A[n - 1];
	delete A;
	return result;
}

