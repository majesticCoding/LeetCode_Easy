#include <iostream>
#include <sstream>
#include <vector>
#include <conio.h>
#include <string>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	int left = m - 1;
	int right = n - 1;
	int k = m + n - 1;

	//remove this before the LeetCode test
	for (int i = m; i < m + n; i++) {
		nums1.push_back(0);
	}

	while (right >= 0 && left >=0) {
		nums1[k--] = (nums1[left] >= nums2[right]) ? nums1[left--] : nums2[right--];
	}

	while (right >= 0) {
		nums1[k--] = nums2[right--];
	}
}

int main() {
	vector<int> A, B;
	string buffer;
	int tmp;

	cout << "enter the 1st array: ";
	getline(cin, buffer);
	istringstream iss(buffer);
	while (iss >> tmp) {
		A.push_back(tmp);
	}

	cout << "enter the 2nd array: ";
	getline(cin, buffer);
	istringstream iss2(buffer);
	while (iss2 >> tmp) {
		B.push_back(tmp);
	}

	merge(A, A.size(), B, B.size());

	for (int i = 0; i < A.size(); i++) {
		cout << A[i] << " ";
	}

	_getch();
	return 0;
}