#include <iostream>
#include <sstream>
#include <vector>
#include <conio.h>
#include <string>

using namespace std;


int searchInsert(vector<int>& nums, int target) {
	int left = 0, right = nums.size() - 1;
	int mid = 0;
	while (left <= right) {
		mid = (left + right) / 2;
		if (nums[mid] == target) {
			return mid;
		}
		if (nums[mid] > target) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}

	if (target > nums[mid]) {
		return mid + 1;
	}
	else if (target < nums[mid] && mid > 0) {
		return mid;
	}

	return mid;
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

	cin >> target;
	
	cout << searchInsert(nums, target);
	
	_getch();
	return 0;
}