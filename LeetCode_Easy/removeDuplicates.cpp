#include <iostream>
#include <sstream>
#include <vector>
#include <conio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int removeDuplicates(vector<int>& nums) {
	nums.erase(unique(nums.begin(), nums.end()), nums.end());
	return nums.size();
}
