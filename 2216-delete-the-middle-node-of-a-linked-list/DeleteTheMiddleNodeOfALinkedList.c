/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    if(head==NULL || head->next==NULL) {
        free(head);
        return NULL;
    }
    struct ListNode* fast = head;
    struct ListNode* slow = fast;
    struct ListNode* prev=NULL;
    while(fast->next != NULL) {
    
        fast =fast->next;
        if(fast->next!=NULL) { fast = fast->next;}
        prev = slow;
        slow=slow->next;
    }
    prev->next = slow->next;
    free(slow);
    return head;
}
