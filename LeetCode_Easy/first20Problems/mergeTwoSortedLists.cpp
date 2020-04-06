#include <iostream>
#include <sstream>
#include <vector>
#include <conio.h>
#include <string>
#include "singlyLinkedListAPI.h"

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* mergeTwoLists(ListNode *l1, ListNode *l2) {
	ListNode *merged = nullptr;

	if (l1 == nullptr && l2 == nullptr) {
		return nullptr;
	}

	while (l1 && l2) {
		if (l1->val > l2->val) {
			pushBack(&merged, l2->val);
			l2 = l2->next;
		}
		else {
			pushBack(&merged, l1->val);
			l1 = l1->next;
		}
	}
	while (l1) {
		pushBack(&merged, l1->val);
		l1 = l1->next;
	}
	while (l2) {
		pushBack(&merged, l2->val);
		l2 = l2->next;
	}
	return merged;
}

/*
int main() {

	ListNode* l1 = nullptr;
	ListNode* l2 = nullptr;
	ListNode* merged = nullptr;

	string buffer;
	int tmp;

	cout << "enter the 1st list: ";
	getline(cin, buffer);
	istringstream iss(buffer);
	while (iss >> tmp) {
		pushBack(&l1, tmp);
	}
	printList(l1);

	cout << endl << "enter the 2nd list: ";
	getline(cin, buffer);
	istringstream iss2(buffer);
	while (iss2 >> tmp) {
		pushBack(&l2, tmp);
	}
	printList(l2);
	
	cout << endl;
	merged = mergeTwoLists(l1, l2);
	printList(merged);

	_getch();
	return 0;
}*/