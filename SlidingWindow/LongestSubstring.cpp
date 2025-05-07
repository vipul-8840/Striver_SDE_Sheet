#include <bits/stdc++.h>
using namespace std;

int longestKSubstr(string &s, int k) {
    // your code here
    int start = 0;
    int end = 0;
    int n = s.size();
    unordered_map<char,int>m;
    int res =-1;
    while(end<n)
    {
        m[s[end]]++;
        if(start<=end && m.size()>k)
        {
            m[s[start]]--;
            if(m[s[start]]==0)
            m.erase(s[start]);
            start++;
            
        }
        if (m.size() == k)
        res = max(res, end - start + 1);

    end++;
}
     
    
    return res;
}