/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int length(ListNode *head){
        ListNode *temp=head;
        int cnt=0;
        while(temp){
            temp=temp->next;
            cnt++;
        }
        return cnt;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int a=length(headA);
        int b=length(headB);
        int d=(a>b)?a-b:b-a;
        ListNode *tempA=headA;
        ListNode *tempB=headB;
        if(a>b){
            
            for(int i=0;i<d;i++){
                tempA=tempA->next;
            }
        }
        else{
           
            for(int i=0;i<d;i++){
                tempB=tempB->next;
            }
        }
        while(tempA){
            if(tempA==tempB){
                return tempA;
            }
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return NULL;
    }
};