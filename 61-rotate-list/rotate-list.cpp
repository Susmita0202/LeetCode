class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) {
            return head;
        }
         int n = 1;
        ListNode* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
            n++;
        }
        ListNode* last = temp;
        k = k % n;
        if (k == 0) {
            return head;  
        }
        ListNode* prev = nullptr;
        temp = head;
        for (int i = 0; i < n - k; i++) {
            prev = temp;
            temp = temp->next;
        }
        ListNode* newHead = temp;  
        prev->next = nullptr;  
        last->next = head;  
        return newHead; 
    }
};
