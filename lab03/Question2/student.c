// Question2/student.c
// ------------------------------------------------------------
// CS Lab03 - Swap Nodes in Pairs 
//
// TODO:
//   Implement swapPairs(head) to swap every two adjacent nodes.
//
// Rules:
// - Do not allocate new nodes.
// - Do not swap values; swap nodes (rewire pointers).
// - Return the new head pointer.
// -----------------------------------------------------------
#include "student.h"

struct ListNode* swapPairs(struct ListNode* head) {
 struct ListNode* newHead = head->next;
    struct ListNode* prev = NULL;
    struct ListNode* first = head;

    while (first && first->next) {

        struct ListNode* second = first->next;
        struct ListNode* nextPair = second->next;

        second->next = first;
        first->next = nextPair;

        if (prev)
            prev->next = second;

        prev = first;
        first = nextPair;
return head;
}
