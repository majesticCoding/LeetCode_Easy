#include <iostream>
#include <sstream>
#include <vector>
#include <conio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int removeElement(vector<int>& nums, int val) {
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] == val) {
			nums.erase(nums.begin() + i);
			i--;
		}
	}

	return nums.size();
}
