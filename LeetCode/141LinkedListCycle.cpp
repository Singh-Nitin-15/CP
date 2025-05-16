#include<iostream>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int data){
        val = data;
        next = NULL;
    }
};

bool hasCycle(ListNode *head) {
    ListNode* fast =head;
    ListNode* slow = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast  = fast->next->next;
        if(slow == fast) return true;
    }
    return false;
}

int main(){
    ListNode* a = new ListNode(10);
    ListNode* b = new ListNode(20);
    ListNode* c = new ListNode(30);
    ListNode* d = new ListNode(40);
    ListNode* e = new ListNode(50);
    a->next = b;
    b->next = c;
    c->next = d; 
    d->next = e;
    e->next = b;
    bool flag = hasCycle(a);
    cout<<flag<<endl;
}