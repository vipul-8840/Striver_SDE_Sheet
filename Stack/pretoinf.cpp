#include <bits/stdc++.h>
using namespace std;

string preToInfix(string s)
    {
        // Write your code here
        stack<string>st;
        int n = s.size();
        for(int i=n-1;i>=0;i--)
        {
            if((s[i]>='A' && s[i]<='Z') ||(s[i]>='a' && s[i]<='z'))
            {
                st.push(string(1,s[i]));
            }
            else{
                string  t1 = st.top();
                 st.pop();
                string  t2=st.top();
                 st.pop();
                 string op = string (1,s[i]);
                 string str = '(' + t1 + op + t2 + ')';
                 st.push(str);
            }
        }
        return st.top();
        
    }
