#include <bits/stdc++.h>
using namespace std;
class QueueStack{
    private:
        queue<int> q1;
        queue<int> q2;
    public:
        void push(int);
        int pop();
    };
void QueueStack ::push(int x) {
    // code here
    q1.push(x);
    int n = q1.size();
    for(int i=0;i<n-1;i++)
    {
        q2.push(q1.front());
        q1.pop();
    }
    
    while(!q2.empty())
    {
        q1.push(q2.front());
        q2.pop();
    }
    
}

int QueueStack ::pop() 
{
    
    if(q1.empty())
    {
        return -1;
    }
    int a = q1.front();
    q1.pop();
    return a ;
    
    // code here
    
    
}
