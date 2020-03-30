#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <conio.h>
#include <string>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

void pushFront(ListNode** head, int val) {
	ListNode *tmp = new ListNode(val);
	tmp->next = *head;
	*head = tmp;
}

void pushBack(ListNode **head, int val) {
	ListNode *tmp = new ListNode(val);
	if (*head == NULL) {
		*head = tmp;
		return;
	}

	ListNode *save = *head;
	while (save->next != NULL) {
		save = save->next;
	}
	save->next = tmp;
}

void printList(ListNode *head) {
	while (head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}
}

ListNode* mergeTwoLists(ListNode *l1, ListNode *l2) {
	
}

int main() {

	ListNode* l1 = NULL;
	ListNode* l2 = NULL;

	string buffer, buffer2;
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

	_getch();
	return 0;
}