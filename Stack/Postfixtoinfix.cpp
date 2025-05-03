#include <bits/stdc++.h>
using namespace std;

string postToInfix(string s) {
    // Write your code here
     stack<string> st;
     for(int i=0;i<s.size();i++)
     {
         if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
         {
            st.push(string(1, s[i]));
         }
         else{
              string op =string(1, s[i]);
              string t1 = st.top();
              st.pop();
              string t2= st.top();
              st.pop();
              string s =  '(' + t2  +  op + t1 + ')';
              st.push(s);
              
         }
     }
     return st.top();
}