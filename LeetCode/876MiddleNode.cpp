#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val =data;
        next = NULL;
    }
};
Node* middleNode(Node* head){
Node* count = head;
        int size = 0;
        while(count!=NULL){
             count = count->next;
            size++;
        }
        int midIdx = size/2;
        Node* temp = head;
        for(int  i= 1 ; i<= midIdx; i++){
            temp = temp->next;
        }
        return temp;
    }

    void printList(Node* node) {
        while (node != NULL) {
            cout << node->val << " ";
            node = node->next;
        }
        cout << endl;
    }
int main()
{
    Node* a = new Node(4);
    Node* b = new Node(5);
    Node* c = new Node(1);
    Node* d = new Node(9);

    a->next = b;
    b->next = c;
    c->next = d;
    Node* ans = middleNode(a);
    
    printList(ans);
    
 
return 0;
}