#include <iostream>
#include <conio.h>

using namespace std;

int reverse(int x) {
	int result = 0, multiplier = 1;

	if (x < 0) {
		multiplier *= -1;
		if ((x * -1) - 1 == INT_MAX) {
			return 0;
		}
		x *= -1;
	}

	while (x > 0) {
		int tmp = x % 10;
		x /= 10;
		if (result * multiplier > INT_MAX / 10 ||
			(result * multiplier == INT_MAX && x % 10 > 7)) {
			return 0;
		}
		if (result * multiplier < INT_MIN / 10 ||
			(result * multiplier == INT_MIN && x % 10 < -8)) {
			return 0;
		}
		result = result * 10 + tmp;
	}

	return result * multiplier;
}

bool isPalindrome(int x) {
	if (x < 0) {
		return false;
	}

	if (reverse(x) == x) {
		return true;
	}
	else {
		return false;
	}

}