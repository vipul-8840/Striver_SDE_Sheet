#include <bits/stdc++.h>
using namespace std;

void sorted(stack<int>&s,int num)
{
    if(s.empty() || num>s.top())
    {
        s.push(num);
        return ;
    }
    int a = s.top();
    s.pop();
    sorted(s,num);
    s.push(a);
}
void SortedStack :: sort()
{
   //Your code here
   if(s.empty())
   return ;
   int num = s.top();
   s.pop();
   sort();
   sorted(s,num);
   
}
