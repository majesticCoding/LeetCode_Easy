#include <iostream>
#include <conio.h>
#include <string>
#include <vector>

using namespace std;

int strStr(string haystack, string needle) {
	if (!needle.size()) {
		return 0;
	}

	if (needle.size() > haystack.size()) {
		return -1;
	}

	vector<int> prefix(needle.length());
	prefix[0] = 0;
	int concurrence = 0;
	for (int i = 1; i < needle.length(); i++)
	{
		while ((concurrence > 0) && (needle[i] != needle[concurrence])) {
			concurrence = prefix[concurrence - 1];
		}

		if (needle[i] == needle[concurrence]) {
			concurrence++;
		}

		prefix[i] = concurrence;
	}

	//trace of prefix array:
	for (int i = 0; i < needle.size(); i++)
		cout << prefix[i] << " ";
	cout << endl;

	int counter = 0;
	for (int i = 0; i < haystack.length(); i++)
	{
		while ((counter > 0) && (needle[counter] != haystack[i])) {
			counter = prefix[counter - 1];
		}

		if (needle[counter] == haystack[i]) {
			counter++;
		}

		if (counter == needle.length()) {
			return i - needle.length() + 1;
		}
	}

	return -1;
}

int strStr2(string haystack, string needle) {

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

