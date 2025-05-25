#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s)
     {
        stack<char>st;
        int n = s.size();
        for(int i=0;i<s.size();i++)
        {
           if(!st.empty() && s[i]==st.top())
           st.pop();

           else{
              st.push(s[i]);
           }
        }
        string ans ="";
        while(!st.empty())
        {
            ans= st.top()+ans;
            st.pop();
        }
        return ans;
        
    }
};