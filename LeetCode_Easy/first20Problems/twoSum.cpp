#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <conio.h>
#include <string>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	map<int, int> m;

	vector<int> result;

	for (int i = 0; i < nums.size(); i++) {
		int numToFind = target - nums[i];
	
		if (m.find(numToFind) != m.end()) {
			result.push_back(m[numToFind]);
			result.push_back(i);
			return result;
		}

		m[nums[i]] = i;
	}

	return result;
}

void _start() {
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

	vector<int> indexes;
	indexes = twoSum(nums, target);

	for (int i = 0; i < 2; i++) {
		cout << indexes[i] << " ";
	}
}

