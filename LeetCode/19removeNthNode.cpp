#include<iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node(int data){
        val = data;
        next = NULL;
    }
    };
    Node* removeNthFromEnd(Node* head, int n) {
        Node* temp = head;
        int len = 0;
        //length calculate
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        temp =head;
        if(n==len){
            head  = head->next;
            return head;
        }
        else{
            for(int i = 1; i<len-n; i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        }
            return head;
    }
    int main(){
        
    }