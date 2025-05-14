#include <bits/stdc++.h>
using namespace std;

//  string removeOccurrences(string s, string part)
//      {

//         int pos = s.find(part);
//         while(pos!=string::npos)
//         {
//             s = s.substr(0,pos) + s.substr(pos+ part.size());
//             pos=s.find(part);
//         }
//         return s ;
// }

    //with help of stack

    
bool check(stack<char>s,string & part)
  {
    int n = part.size();
    for(int i= n-1;i>=0;i--)
    {
        if(s.top()!=part[i])
        return false;

        s.pop();
    }
    return true;
  }
    string removeOccurrences(string s, string part)
     {
        stack<char>st;
        int n = part.size();
        for(int i=0;i<s.size();i++)
        {
            st.push(s[i]);
            if(st.size()>=n && check(st,part))
            {
               for(int i=0;i<n;i++)
                 st.pop();
            }
        }
        string ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }