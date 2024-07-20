/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0); // Create a dummy node
        dummy->next = head;
        
        ListNode* first = dummy;
        ListNode* second = dummy;
        
        // Move the first pointer n+1 steps ahead
        for (int i = 0; i <= n; ++i) {
            first = first->next;
        }
        
        // Move both pointers until first reaches the end
        while (first != nullptr) {
            first = first->next;
            second = second->next;
        }
        
        // second->next is the node to be deleted
        ListNode* nodeToDelete = second->next;
        second->next = second->next->next;
        
        // Clean up the node to be deleted
        delete nodeToDelete;
        
        // Get the new head
        ListNode* newHead = dummy->next;
        
        // Clean up the dummy node
        delete dummy;
        
        return newHead;
    }
};
