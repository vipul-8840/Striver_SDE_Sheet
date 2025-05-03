#include <bits/stdc++.h>
using namespace std;

int priority(char s)
{
    if(s=='^')
    return 3;
    else if(s=='*' || s=='/')
    return 2;
    else if(s=='+' || s=='-')
    return 1;
    else
    return -1;
    
    
}
 string infixToPostfix(string& s) {
     // code here
     string ans =" ";
     stack <char>st;
     for(int i=0;i<s.size();i++)
     {
         if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
         {
             ans = ans + s[i];
         }
         
         else if(s[i]==')')
         {
             while(!st.empty() && st.top()!='(')
             {
                 ans = ans + st.top();
                 st.pop();
             }
             st.pop();
         }
         else if(s[i]=='(')
         {
             st.push(s[i]);
         }
         else{
               while(!st.empty() && priority(s[i]) <= priority(st.top()))
               {
                   ans = ans + st.top();
                   st.pop();
                   
               }
             st.push(s[i]);
         }
     }
     while(!st.empty())
     {
          ans = ans+st.top();
          st.pop();
     }
     return ans;
 }