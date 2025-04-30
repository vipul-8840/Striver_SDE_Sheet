#include <bits/stdc++.h>
using namespace std;

struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};


struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
};
void MyQueue::push(int x) {
    // Your Code
        QueueNode * temp = new  QueueNode(x);
        if(rear==NULL)
        {
            rear = temp;
            front = temp;
        }
        else{
            rear->next = temp;
            rear = temp;
        }
}

// Function to pop front element from the queue.
int MyQueue ::pop() {
    // Your Code
    
    if(front==NULL)
    return -1;
    
     int a = front->data;
     QueueNode* temp = front->next;
     if(temp==NULL)
     {
         rear = NULL;
         front->next = NULL;
         front = NULL;
     }
     else
     {
            front->next = NULL;
             front = temp;
     }
  
     return a;
}