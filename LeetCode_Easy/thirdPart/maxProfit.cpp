#include <iostream>
#include <sstream>
#include <vector>
#include <conio.h>
#include <string>
#include <algorithm>

using namespace std;

int maxProfit(vector<int>& prices) {

	if (!prices.size() || prices.size() == 1){
		return 0;
	}

	int tmp = prices[0];
	int profit = prices[1] - tmp;
	for (int i = 0; i < prices.size(); i++) {
		int tmp = prices[i];
		for (int j = i; j < prices.size(); j++) {
			if ((prices[j] - tmp) > profit) {
				profit = prices[j] - tmp;
			}
		}
	}
	return profit;
}

int maxProfitFast(vector<int>& prices) {

	if (!prices.size() || prices.size() == 1) {
		return 0;
	}

	int tmp = prices[0];
	int profit = 0;
	for (int i = 0; i < prices.size(); i++) {
		if (prices[i] < tmp) {
			tmp = prices[i];
		}
		profit = max(profit, prices[i] - tmp);
	}
	return profit;
}

