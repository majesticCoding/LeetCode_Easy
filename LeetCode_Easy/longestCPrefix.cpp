#include <iostream>
#include <conio.h>
#include <string>
#include <vector>

using namespace std;

/*
TODO: think how to make unlimited enter of strings
*/

string longestCommonPrefix(vector<string>& strs) {
	if (strs.size() == 0) {
		return "";
	}
	if (strs.size() == 1) {
		return strs[0];
	} 

	string resultPrefix = "";
	int counter = 0, pos = 0;
	bool stopFlag = false;
	for (int i = 0; i < strs[0].size(); i++) {
		for (int j = 1; j < strs.size(); j++) {
			if (strs[0][pos] != strs[j][pos]) {
				stopFlag = true;
			}
		}

		if (stopFlag) {
			break;
		}

		pos++;
		counter++;
	}
	resultPrefix.append(strs[0].begin(), strs[0].begin() + counter);

	return resultPrefix;
}

int main() {
	vector<string> a = {"flower", "flow", "flash"};
	cout << longestCommonPrefix(a);
	_getch();
	return 0;
}