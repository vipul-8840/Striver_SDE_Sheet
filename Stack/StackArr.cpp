#include <bits/stdc++.h>
using namespace std;
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};

void MyStack ::push(int x) {
    // Your Code
    top++;
    arr[top]=x;
}

// Function to remove an item from top of the stack.
int MyStack ::pop() {
    // Your Code
    if(top==-1)
    return -1;
    int a = arr[top];
    top--;
    return a ;
}
