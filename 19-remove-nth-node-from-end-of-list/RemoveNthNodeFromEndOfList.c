/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int length = 0;
    struct ListNode* curr = head;
    
    // Calculate the length of the linked list
    while (curr != NULL) {
        length++;
        curr = curr->next;
    }

    // Find the position to remove
    int traverseTill = length - n - 1;
    int i = 0;
    curr = head;

    // If the head needs to be removed
    if (traverseTill == -1) {
        head = head->next;
        free(curr);
        return head;
    }

    // Traverse to the node before the one to be removed
    while (i < traverseTill) {
        curr = curr->next;
        i++;
    }

    // Remove the nth node from the end
    struct ListNode* temp = curr->next;
    curr->next = curr->next->next;
    free(temp);

    return head;
}
