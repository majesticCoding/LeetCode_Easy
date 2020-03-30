#pragma once

typedef struct ListNode;

void pushFront(ListNode** head, int val);
int getListSize(ListNode** head);
void popBack(ListNode** head);
void popFront(ListNode** head);
void printList(ListNode* head);
void pushBack(ListNode** head, int val);
void removeByPos(ListNode** head, int pos);


