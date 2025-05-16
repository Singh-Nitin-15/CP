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
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    long long int sizeA = 0;
    long long int sizeB = 0;
     ListNode* tempA = headA;
     ListNode* tempB = headB;
     while(tempA!=NULL){
         sizeA++;
         tempA = tempA->next;
     }
     while(tempB!=NULL){
         sizeB++;
         tempB = tempB->next;
     }
     tempA = headA;
     tempB = headB;

     for(int i = 1; i<=abs(sizeA-sizeB); i++){
         if(sizeA<sizeB) tempB = tempB->next;
         else{ 
             tempA= tempA->next;
             }
     }
     
     while(tempA!=tempB){
         tempA = tempA->next;
         tempB = tempB->next;
     }
     return tempA;
 }