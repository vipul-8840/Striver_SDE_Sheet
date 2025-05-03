#include <bits/stdc++.h>
using namespace std;

//Infix to Prefix Conversion 
int priority(char s )
{
    if(s=='^')
    return 3;
    else if(s=='*' || s=='/')
    return 2;
    else if (s=='+' || s=='-')
    return 1;
    else
    return -1;
}

 int main()
 {
     string s;
     cout<<"Enter the string : " ;
     getline(cin,s);
     int n = s.size();
     stack<char> st ;
     string ans= " ";
     for(int i=n-1;i>=0;i--)
     {
          if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
          {
            ans=ans + s[i];
             
          }
          else if(s[i]==')')
          {
            st.push(s[i]);
          }
          else if (s[i]=='(')
           {
             while(!st.empty() && st.top()!=')')
             {
                ans = ans + st.top();
                st.pop();
             }
             st.pop();
          }
          else
           {
             if(s[i]=='^')
             {
                while(!st.empty() && priority(s[i])<=priority(st.top()))
                {
                    ans= ans+st.top();
                    st.pop();
                }

             }
             else{
                while(!st.empty() && priority(s[i])<priority(st.top()))
                {
                    ans+=st.top();
                    st.pop();
                }
             }
             st.push(s[i]);
          }
            

     }

     while(!st.empty())
     {
         ans=ans + st.top();
         st.pop();
     }
     reverse(ans.begin(),ans.end());
            cout<<ans<<endl; 
            return 0;

 }