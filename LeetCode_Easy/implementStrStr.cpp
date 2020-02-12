#include <iostream>
#include <conio.h>
#include <string>

using namespace std;


int strStr(string haystack, string needle) {

	if (!needle.size()) {
		return NULL;
	}

	if (needle.size() > haystack.size()) {
		return -1;
	}

	int counter = 0;
	for (int i = 0; i < haystack.size(); i++) {

		if (i + needle.size() > haystack.size()) {
			return -1;
		}

		if (haystack[i] == needle[0]) {
			while (i + counter < haystack.size() 
				   && haystack[i + counter] == needle[counter]) {
				counter++;
			}
			if (counter == needle.size()) {
				return i;
			}
			counter = 0;
		}
	}

	return -1;
}


int main() {

	string haystack, needle;
	cin >> haystack >> needle;
	cout << strStr(haystack, needle);
	_getch();
	return 0;
}