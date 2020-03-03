#include <iostream>
#include <sstream>
#include <vector>
#include <conio.h>
#include <string>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
	int i = digits.size() - 1;
	while (i >= 0 && digits[i] == 9) {
		digits[i] = 0;
		i--;
	}
	if (i >= 0) {
		digits[i]++;
	}
	else {
		digits.insert(digits.begin(), 1);
	}

	return digits;
}

int main() {

	vector<int> nums;
	string buffer;
	int target;

	int tmp;
	getline(cin, buffer);
	istringstream iss(buffer);
	while (iss >> tmp) {
		nums.push_back(tmp);
	}

	nums = plusOne(nums);
	for (int i = 0; i < nums.size(); i++) {
		cout << nums[i] << " ";
	}
	_getch();
	return 0;
}