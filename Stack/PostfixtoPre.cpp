#include <bits/stdc++.h>
using namespace std;

string postToPre(string s) {
    // Write your code here
    stack<string>st;
    int n = s.size();
    for(int i=0;i<n;i++)
    
    {
        if((s[i]>='A'&& s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
        {
            string ch = string(1,s[i]);
            st.push(ch);
        }
        else
        {
            string op = string(1,s[i]);
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            st.push(op+t2+t1);
        }
    }
    return st.top();
}
