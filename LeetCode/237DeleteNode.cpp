#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;
        Node(int data){
            val = data;
            next = NULL;
        }
};

void deleteNode(Node* node){
    Node* temp = node;
    node->val = node->next->val;
    node->next = node->next->next;
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

    deleteNode(b);
 
return 0;
}