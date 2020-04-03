#include <iostream>
#include <conio.h>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int max(int a, int b) {
	int max;
	return max = (a > b) ? a : b;
}

int maxSubArray(vector<int>& nums) {
	if (nums.size() == 0) {
		return 0;
	} 

	int maxS = nums[0];
	int tmpS = nums[0];
	for (int i = 1; i < nums.size(); i++) {
		tmpS = max(nums[i], tmpS + nums[i]);
		if (tmpS > maxS) {
			maxS = tmpS;
		}
	}

	return maxS;
}

