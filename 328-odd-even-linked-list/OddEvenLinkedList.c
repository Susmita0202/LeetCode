/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int len(struct ListNode *head)
{
    int l=0;
    struct ListNode *p=head;
    while(p!=NULL)
    {
        p=p->next;
        l+=1;
    }
    return l;
}
struct ListNode* oddEvenList(struct ListNode* head){
    if(head==NULL)
    {
        return head;
    }
    if(len(head)==1)
    {
        return head;
    }
    struct ListNode *p=head;
    struct ListNode *dum=NULL;
    struct ListNode *u;
    while(p!=NULL)
    {
        struct ListNode *n=(struct ListNode *)malloc(sizeof(struct ListNode));
        n->val=p->val;
        n->next=NULL;
        if(dum==NULL)
        {
            dum=n;
            u=dum;  
        }
        else
        {
            u->next=n;
            u=n;
        }
        p=p->next;
    }
    struct ListNode *t=head;
    struct ListNode *o=dum;
    struct ListNode *e=dum->next;
    while(o->next!=NULL)
    {
        t->val=o->val;
        o=o->next->next;
        t=t->next;
        if(o==NULL)
        {
            break;
        }
    }
    if(len(head)%2!=0)
    {   t->val=o->val;
        t=t->next;
    }
    while(e!=NULL)
    {
        t->val=e->val;
        if(e->next==NULL)
        {
            break;
        }
        e=e->next->next;
        t=t->next;
    }
    return head;

}
