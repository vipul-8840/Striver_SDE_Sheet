#include <bits/stdc++.h>
using namespace std;
void bottom(stack<int>&st,int data)
    {
          if(st.empty())
         {
             st.push(data);
             return;
         }
          int n = st.top();
          st.pop();
          bottom(st,data);
          st.push(n);
    }
    void Reverse(stack<int> &st)
    { 
        if(st.empty())
        return ;
        int a = st.top();
        st.pop();
        Reverse(st);
       bottom(st,a);
        
    }