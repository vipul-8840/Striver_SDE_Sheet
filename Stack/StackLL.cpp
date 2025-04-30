#include <bits/stdc++.h>
using namespace std;
class StackNode{
    public:
    int data ;
    StackNode* next ;

    StackNode()
    {

    }
    StackNode(int data)
    {
        this->data = data ;
        next =NULL;
    }

};
class MyStack {
    private:
         StackNode *top;
         StackNode * dummy = new  StackNode(-1);
        
       
  
    public:
      void push(int x) {
          // code here
          
           StackNode * curr = dummy;
          while(curr->next)
          {
              curr=curr->next;
          }
           StackNode * temp = new  StackNode(x);
          curr->next = temp;
          
          
      }
  
      int pop() {
          
          // code here
           top = dummy;
           StackNode* prev = NULL;
          while(top->next)
          {
              prev = top;
              top = top->next;
          }
          if(top==dummy)
          return -1;
          int a = top->data;
          
          prev->next = NULL;
          return a ;
          
          
          
      }
  
      MyStack() { top = NULL; }
  };
  