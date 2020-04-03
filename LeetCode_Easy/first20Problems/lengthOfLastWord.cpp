#include <iostream>
#include <conio.h>
#include <string>
#include <sstream>

using namespace std;

int lengthOfLastWord(string s) {
	if (!s.length()) {
		return 0;
	}

	reverse(s.begin(), s.end());
	istringstream iss(s);
	string token;
	while (getline(iss, token, ' ')) {
		if (token.size()) {
			return token.size();
		}
	}
	
	return 0;
}

