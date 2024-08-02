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
    ListNode *KthNode(ListNode *temp,int k){
        k-=1;
        while(temp!=NULL && k>0){
            temp=temp->next;
            k--;
        }
         return temp;
        
    }
    void reverse(ListNode* head){
        ListNode *temp1=NULL;
        ListNode *temp2=0;
        while(head!=NULL){
            temp2=head;
            head=head->next;
            temp2->next=temp1;
            temp1=temp2;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp=head;
        ListNode *prev=NULL;
        while(temp!=NULL){
            ListNode *kthnode=KthNode(temp,k);
            if(kthnode==NULL){
                if(prev){
                    prev->next=temp;
                    break;
                }
            }
            ListNode* nextnode=kthnode->next;
            kthnode->next=NULL;
            reverse(temp);
            if(temp==head){
                head=kthnode;
            }
            else{
                prev->next=kthnode;
            }
            prev=temp;
            temp=nextnode;
        }
        return head;
    }
};