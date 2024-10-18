#include <stdlib.h>

//  Definition for singly-linked list.
 struct ListNode {
     int val;
     struct ListNode *next;
};
 
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {

    if (list1 == NULL)
    {
        return list2;
    }
    else if (list2 == NULL)
    {
        return list1;
    }
    else if (list1 == NULL && list2 == NULL)
    {
        return NULL;
    }

    // struct ListNode* mergedList = malloc(sizeof(struct ListNode));
    // struct ListNode* trav1 = malloc(sizeof(struct ListNode));
    // struct ListNode* trav2 = malloc(sizeof(struct ListNode));
    // trav1->next = list1;
    // trav2->next = list2;

    struct ListNode dummy;
    struct ListNode* tail = &dummy;
    dummy.next = NULL;

    while (list1 != NULL && list2 != NULL) {
        if (list1->val < list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    // Attach the remaining nodes of list1 or list2
    if (list1 != NULL) {
        tail->next = list1;
    } else {
        tail->next = list2;
    }

    return dummy.next;
}

