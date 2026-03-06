// Question1/student.c
// ------------------------------------------------------------
// CS Lab03 - Reverse Linked List 
//
// TODO:
//   Implement reverseList(head) to reverse a singly linked list.
//
// Rules:
// - Do not allocate new nodes.
// - Do not use recursion.
// - Return the new head pointer.
// ------------------------------------------------------------

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * }; */

#include "student.h"

struct ListNode* reverseList(struct ListNode* head) {
	int num=0;
	struct ListNode* Current1 = head;
	struct ListNode* Beginning = head;
	int a = 0;
	int b = 0;
	int c = 0;
	int BegVal = 0;
	int EndVal = 0;

	while (Current1 != NULL) {num++; Current1 = Current1->next;}
	c = num;
	for(a=num / 2; a>0; a--)
	{
		struct ListNode* End = head;
		for(b=c; b>1; b--)
		{
			End = End->next;
		}
		EndVal = End->val;
		BegVal = Beginning->val;
		End->val = BegVal;
		Beginning->val = EndVal;
		Beginning = Beginning->next;
		c--;
	}
	return head;
}

