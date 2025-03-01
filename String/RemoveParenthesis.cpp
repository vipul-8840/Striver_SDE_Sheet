#include<bits/stdc++.h>
using namespace std ;
// string removeOuterParentheses(string s)
// {
//    stack<char>st;
//    string ans = "";
//    for(int i=0;i<s.size();i++)
//    {
//       if(s[i]=='(')
//       {
//        if(!st.empty())
//        {
//            ans+='(';
//        }
//        st.push('(');
//       }
//       else{
//            st.pop();
//            if(!st.empty())
//            {
//                ans+=')';
//            }
//       }
//    }
//    return ans ;
// }

//2nd method to solved this problem without using extra space time complexity 

string removeOuterParentheses(string s) 
{
    int count = 0;
    string ans="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            if(count==0)
             count++;
             else{
                ans+="(";
                count++;
             }
        }
        else{
            count--;
            if(count>0)
            {
                ans+=')';
            }
        }
    }
    return ans ;
}