#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

string countAndSay(int n) {
	
	if (n <= 0) {
		return "";
	}

	string result;
	if (n == 1) {
		return "1";
	}
	else if (n == 2) {
		return "11";
	}

	int frequency = 0, pos = 0;
	result = "11";
	while (n >= 3) {
		string currentStr = result;
		result = "";
		for (int i = 0; i < currentStr.length(); i++) {
			if (currentStr[i] == currentStr[pos]) {
				while (pos < currentStr.length() && currentStr[i] == currentStr[pos]) {
					frequency++; pos++;
				}
				result.push_back(static_cast<char>(frequency + 48));
				result.push_back(static_cast<char>(currentStr[i]));
				i += frequency - 1;
				frequency = 0;
			}
		}
		pos = 0;
		n--;
	}

	return result;
}

int main() {
	cout << countAndSay(11);
	_getch();
	return 0;
}
