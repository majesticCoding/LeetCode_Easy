#include <iostream>
#include <conio.h>
#include <string>
#include <stack>

using namespace std;

bool isValid(string s) {
	if (s.empty()) {
		return true;
	}

	stack<char> brackets;
	for (int i = 0; i < s.size(); i++) {
		if (brackets.size() == 0 && 
			(s[i] == '}' || s[i] == ']' || s[i] == ')')) {
			return false;
		}
		if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
			brackets.push(s[i]);
		}
		else {
			if ((brackets.top() == '{' && s[i] == '}') ||
				(brackets.top() == '[' && s[i] == ']') ||
				(brackets.top() == '(' && s[i] == ')')) {
				brackets.pop();
			}
			else {
				return false;
			}
		}
	}

	if (brackets.size() == 0) {
		return true;
	}
	else {
		return false;
	}
}

