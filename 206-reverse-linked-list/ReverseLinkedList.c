/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *nhead, *p,*q;
    p = head;
    
    if(head == NULL || head->next == NULL) return head;
    nhead = head->next;
    while(nhead!=NULL)
    {
        if(nhead->next == NULL)
        {
            nhead->next = p;
            head->next = NULL;
            return nhead;
        }
        q = nhead->next;
        nhead->next = p;
        p = nhead;
        nhead = q;
    }

   return nhead;
}
