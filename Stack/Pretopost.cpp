#include <bits/stdc++.h>
using namespace std;



string preToPost(string s) {
    int n = s.size();
    stack<string> st;
    for(int i=n-1;i>=0;i--)
    {
       if((s[i]>='A'&& s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
    {
        string ch = string(1,s[i]);
        st.push(ch);
    }
        else{
       string op = string(1,s[i]);
        string t1 = st.top();
        st.pop();
        string t2 = st.top();
        st.pop();
        st.push(t1+t2+op);
        }
    }
    return st.top();
}