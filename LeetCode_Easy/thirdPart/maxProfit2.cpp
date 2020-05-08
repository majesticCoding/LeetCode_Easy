#include <iostream>
#include <sstream>
#include <vector>
#include <conio.h>
#include <string>
#include <algorithm>

using namespace std;

int maxProfit2(vector<int>& prices) {
	if (!prices.size() || prices.size() == 1) {
		return 0;
	}
	
	int profit = 0;
	for (int i = 1; i < prices.size(); i++) {
		if (prices[i] > prices[i - 1]) {
			profit += prices[i] - prices[i - 1];
		}
	}
	return profit;
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
	cout << maxProfit2(nums);
	_getch();
	return 0;
}