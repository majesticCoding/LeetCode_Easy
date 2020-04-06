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

void pushFront(ListNode** head, int val) {
	ListNode *tmp = new ListNode(val);
	tmp->next = *head;
	*head = tmp;
}

void pushBack(ListNode** head, int val) {
	ListNode *tmp = new ListNode(val);
	if (*head == nullptr) {
		*head = tmp;
		return;
	}

	ListNode *save = *head;
	while (save->next != nullptr) {
		save = save->next;
	}
	save->next = tmp;
}

void printList(ListNode* head) {
	while (head != nullptr) {
		cout << head->val << " ";
		head = head->next;
	}
}

void popFront(ListNode** head) {
	if (*head == nullptr) {
		return;
	}
	ListNode* tmp = *head;
	*head = (*head)->next;
	free(tmp);
}

void popBack(ListNode** head) {
	if (*head == nullptr) {
		return;
	}

	ListNode* tmp = *head;
	if ((*head)->next == nullptr) {
		*head = (*head)->next;
		free(tmp);
		return;
	}

	while ((*head)->next->next != nullptr) {
		*head = (*head)->next;
	}
	ListNode* removingElem = (*head)->next;
	(*head)->next = nullptr;
	free(removingElem);
	*head = tmp;
}

int getListSize(ListNode** head) {
	ListNode* tmp = *head;
	int counter = 0;
	while (tmp != nullptr) {
		counter++;
		tmp = tmp->next;
	}

	return counter;
}

/*
TODO: implement it
*/
void removeByPos(ListNode** head, int pos) {
	if (*head == nullptr) {
		return;
	}

	if (getListSize(head) < pos) {
		cout << "\nerror";
		return;
	}
}

ListNode* deleteDuplicates(ListNode* head) {

	if (head == nullptr) {
		return head;
	}

	if (getListSize(&head) == 1) {
		return head;
	}

	ListNode* save = head;
	while (head->next != nullptr) {
		if (head->val == head->next->val) {
			ListNode* tmp = head->next;
			head->next = head->next->next;
			delete tmp;
		}
		else {
			head = head->next;
		}
	}

	head = save;
	return head;
}

/*int main() {

	ListNode* l = nullptr;
	string buffer;
	int tmp;

	cout << "enter the list: ";
	getline(cin, buffer);
	istringstream iss(buffer);
	while (iss >> tmp) {
		pushBack(&l, tmp);
	}
	printList(l);
	cout << endl <<"size: " << getListSize(&l) << endl;
	ListNode* l2 = deleteDuplicates(l);
	printList(l2);

	_getch();
	return 0;
}*/