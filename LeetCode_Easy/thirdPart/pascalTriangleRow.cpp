#include <iostream>
#include <sstream>
#include <vector>
#include <conio.h>
#include <string>

using namespace std;

int getCoefficient(int n, int k) {
	double c = 1.0;
	for (int i = 1; i <= k; ++i)
		c = c * (n - k + i) / i;
	return (int)(c + 0.01);
}

vector<int> getRow(int rowIndex) {
	vector<int> nums;

	if (!rowIndex) {
		nums.push_back(1);
		return nums;
	}

	for (int i = 0; i <= rowIndex; i++) {
		int coeff = getCoefficient(rowIndex, i);
		nums.push_back(coeff);
	}

	return nums;
}

/*int main() {
	vector<int> nums = getRow(3);
	for (int i = 0; i < nums.size(); i++) {
		cout << nums[i] << " ";
	}
	_getch();
	return 0;
}*/