#include <bits/stdc++.h>
using namespace std;

Node* deleteNode(Node* head, int x) {
    // Your code here
    
    if(head==NULL || x==0)
    return head;
    if(x==1 && head->next==NULL)
    return NULL;
    if (x==1 && head->next)
    {
       Node * temp = head ->next;
       temp->prev = NULL;
       head->next = NULL;
       return temp;
        
    }
    int n = 0;
    Node* curr = head;
    Node * temp = NULL;
    
    while(curr)
    {
        n++;
        temp =curr;
        curr=curr->next;
    }
    if(x>n)
    return head;
    if(n==x)
    {
      
        temp->prev->next = NULL;
          temp->prev =NULL;
          return head;
        
    }
    
    x--;
    int count = 0;
    curr = head;
    while(count<x)
    {
         count++;
        curr=curr->next;
        
    }
    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;
    curr->prev = NULL;
    curr->next = NULL;
    return head;
    
}