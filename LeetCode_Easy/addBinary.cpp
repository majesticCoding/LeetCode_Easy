#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

string addBinary(string a, string b) {
	string sum = "", tmp = "";

	if (a.size() > b.size()) {
		tmp.append(a.size() - b.size(), '0');
		tmp.append(b);
		b = tmp;
	}
	else {
		tmp.append(b.size() - a.size(), '0');
		tmp.append(a);
		a = tmp;
	}

	int additionalOne = 0, counter = 0;
	while (a.size() - counter > 0) {
		//cout << b[b.size() - counter - 1] << " " << a[a.size() - counter - 1] << endl;
		if (b[b.size() - counter - 1] == '1' && a[a.size() - counter - 1] == '1') {
			if (!additionalOne) {
				sum.append(1, '0');
			}
			else {
				sum.append(1, '1');
			}
			additionalOne = 1;
		}
		if ((b[b.size() - counter - 1] == '0' && a[a.size() - counter - 1] == '1') ||
			(b[b.size() - counter - 1] == '1' && a[a.size() - counter - 1] == '0')) {
			if (!additionalOne) {
				sum.append(1, '1');
			}
			else {
				sum.append(1, '0');
				additionalOne = 1;
			}
		}
		if (b[b.size() - counter - 1] == '0' && a[a.size() - counter - 1] == '0') {
			if (!additionalOne) {
				sum.append(1, '0');
			}
			else {
				sum.append(1, '1');
			}
			additionalOne = 0;
		}
		counter++;
	}

	if (additionalOne) {
		sum.append(1, '1');
	}

	reverse(sum.begin(), sum.end());
	return sum;
}

/*int main() {
	string a, b;
	cin >> a >> b;
	cout << addBinary(a, b);
	_getch();
	return 0;
}*/