#include <iostream>
#include <sstream>
#include <vector>
#include <conio.h>
#include <string>

using namespace std;

vector<vector<int>> generate(int numRows) {
	
	vector<vector<int>> nums;

	if (!numRows) {
		return nums;
	}
	
	nums.resize(numRows);

	nums[0].push_back(1);
	if (numRows == 1) {
		return nums;
	}

	nums[1].push_back(1);
	nums[1].push_back(1);
	if (numRows == 2) {
		return nums;
	}

	for (int i = 2; i < numRows; i++) {
		nums[i].push_back(nums[i - 1][0]);
		int pos = 0;
		for (int j = 0; j < nums[i - 1].size() - 1; j++) {
			if (pos + 1 >= nums[i - 1].size())
				break;
			nums[i].push_back(nums[i - 1][pos] + nums[i - 1][pos + 1]);
			pos++;
		}
		nums[i].push_back(nums[i - 1][nums[i - 1].size() - 1]);
	}

	return nums;
}

/*int main() {
	vector<vector<int>> nums = generate(0);
	for (int i = 0; i < nums.size(); i++) {
		for (int j = 0; j < nums[i].size(); j++) {
			cout << nums[i][j] << " ";
		}
		cout << endl;
	}
	_getch();
	return 0;
}*/