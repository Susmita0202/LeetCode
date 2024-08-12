/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void insertcopy(Node *head){
        Node *temp=head;
        while(temp!=NULL){
            Node *dummyNode=new Node(temp->val);
            dummyNode->next=temp->next;
            temp->next=dummyNode;
            temp=temp->next->next;
        }
    }
    void connectrandom(Node *head){
        Node *temp=head;
        while(temp){
            if(temp->random){
                temp->next->random = temp->random->next;
                
               // dummy=dummy->next->next;
            }
            temp=temp->next->next;
        }
    }
    Node *deepcopy(Node *head){
        Node *temp=head;
        Node *dummyhead=new Node(-1);
        dummyhead->next=temp->next;
        Node *res=dummyhead;
        while(temp){
            res->next=temp->next;
            res=res->next;
            temp->next=temp->next->next;
            temp=temp->next;
            
        }
        return dummyhead->next;
    }
    Node* copyRandomList(Node* head) {
        if(head==NULL){
            return head;
        }
        insertcopy(head);
        connectrandom(head);
        Node *newhead=deepcopy(head);
        return newhead;
    }
};