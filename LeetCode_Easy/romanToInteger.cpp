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
	}
	return n;
}

int romanToInt(string s) {
	int n = 0;

	if(s.size() == 1) { return decoder(s[0]); }

	if ((int)s.find("IV") != -1) { n += 4; s.erase(s.find("IV"), 2); }
	if ((int)s.find("IX") != -1) { n += 9; s.erase(s.find("IX"), 2); }
	if ((int)s.find("XL") != -1) { n += 40; s.erase(s.find("XL"), 2); }
	if ((int)s.find("XC") != -1) { n += 90; s.erase(s.find("XC"), 2); }
	if ((int)s.find("CD") != -1) { n += 400; s.erase(s.find("CD"), 2); }
	if ((int)s.find("CM") != -1) { n += 900; s.erase(s.find("CM"), 2); }

	for (int i = 0; i < s.size(); i++) {
		n += decoder(s[i]);
	}

	return n;
}