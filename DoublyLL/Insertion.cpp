#include <bits/stdc++.h>
using namespace std;

Node *addNode(Node *head, int pos, int data) {
    // code here
    int count = 0;
    Node * curr = head;
      if(head==NULL)
      {
           Node * temp = new Node(data);
           return temp;
          
      }
    while(count<pos)
    {   count++;
        curr = curr->next;
    }
    if(curr->next==NULL)
    {
        Node * temp = new Node(data);
        curr->next = temp;
        temp->prev = curr;
        return head ;
        
    }
    else {
        Node * temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
        temp->prev = curr ;
        temp->next->prev = temp;
        return head;
        
    }
}