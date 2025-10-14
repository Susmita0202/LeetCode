/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//User-Defined Function By Us..... (It takes starting node and number of nodes)
void reverse(struct ListNode *node, int z)
{
    struct ListNode *temp,*temp2;
    int i=1;
    temp = node;
    while(i<z)
    {
        
        temp2 = node;

        for(int k=1;k<z;k++)
        {
            temp2 = temp2->next;
        }
        temp->val = temp->val + temp2->val;
        temp2->val = temp->val - temp2->val;
        temp->val = temp->val - temp2->val;

        temp = temp->next;

        i++;
        z--;
    }
}
struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    
    struct ListNode *temp;
    int size=1;

    temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
        size++;
    }
    
    temp = head;

//Run the loop for size/k times
    for(int i=1;i<=size/k;i++)
    {
        reverse(temp,k);

        //Making a jump of k steps and accquiring starting node of each jump.
        for(int j=1;j<=k;j++)
        {
            temp = temp->next;
        }
    }

    return head;
}
