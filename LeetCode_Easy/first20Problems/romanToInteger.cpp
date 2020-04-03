#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

/*
Algorithm:
	1) Find all IV, IX, XL, XC, CD and CM
	2) add these all values to result and eliminate symbols from string
	3) convert the rest symbols and add to result
*/ 

int decoder(char c) {
	int n;
	switch (c) {
		case 'I':
			n = 1; break;
		case 'V':
			n = 5; break;
		case 'X':
			n = 10; break;
		case 'L':
			n = 50; break;
		case 'C':
			n = 100; break;
		case 'D':
			n = 500; break;
		case 'M':
			n = 1000; break;
		default:
			n = 0; break;
	}
	return n;
}

int romanToInt(string s) {
	int n = 0;

	if (s.size() == 1) { return decoder(s[0]); }

	int pos = 0;
	if ((pos = (int)s.find("IV")) != -1) { n += 4; s[pos] = ' '; s[pos+1] = ' '; }
	if ((pos = (int)s.find("IX")) != -1) { n += 9; s[pos] = ' '; s[pos+1] = ' '; }
	if ((pos = (int)s.find("XL")) != -1) { n += 40; s[pos] = ' '; s[pos+1] = ' '; }
	if ((pos = (int)s.find("XC")) != -1) { n += 90; s[pos] = ' '; s[pos+1] = ' '; } 
	if ((pos = (int)s.find("CD")) != -1) { n += 400; s[pos] = ' '; s[pos+1] = ' '; }
	if ((pos = (int)s.find("CM")) != -1) { n += 900; s[pos] = ' '; s[pos+1] = ' '; }

	for (int i = 0; i < s.size(); i++) {
		n += decoder(s[i]);
	}

	return n;
}

