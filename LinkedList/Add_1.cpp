#include<bits/stdc++.h>
using namespace std ;
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

class Solution {
    public:
    Node * reverse(Node * head)
    {
            if(head==NULL || head->next==NULL)
            return head ;
            Node * prev = NULL;
            Node * curr = head;
            while(curr)
            {
                Node * temp = curr->next;
                curr->next = prev;
                prev = curr ;
                curr = temp;
            }
            return prev;
    }
      Node* addOne(Node* head) {
          // Your Code here
          head = reverse(head);
          // return head of list after adding one
          int count = 0;
          Node * curr = head ;
          Node * prev = NULL;
         int  flag = 0;
          while(curr || count)
          {
              if(flag==0)
              {
                  int sum = curr->data + 1 + count;
                  curr->data = sum % 10;
                  count = sum /10;
                  prev = curr ;
                  curr=curr->next;
                  flag = 1;
                  
              }
              if(count!=0 && curr==NULL && flag)
              {
                   prev->next = new Node(count) ;
                   count = 0;
              }
             else if(count!=0 && curr && flag)
              {
                  int sum = curr->data + count;
                  curr->data = sum % 10;
                  count = sum /10;
                  prev = curr ;
                  curr=curr->next;
              }
              else{
                  break;
              }
          
              
          }
          return reverse(head);
      }
  };