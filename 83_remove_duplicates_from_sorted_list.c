#include <stdlib.h>
// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head) {
        struct ListNode* trav = head;
        
        while (trav != NULL && trav->next != NULL)
        {
            if (trav->val == trav->next->val)
            {
                struct ListNode* node = trav->next;
                trav->next = trav->next->next;

                free(node);
            }
            else { trav = trav->next; }
        }

        return head;
}