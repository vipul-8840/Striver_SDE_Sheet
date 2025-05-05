#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
     {
        
        int start = 0;
        int end = 0;
        int n = s.size();
        int res = 0;
        unordered_map<char,int>m;
        while(end<n)
        {
            if(m[s[end]]>=1)
            {
                while(start<end && m[s[end]]>=1)
                {
                    m[s[start]]--;
                    if(m[s[start]]==0)
                    m.erase(m[s[start]]);
                    start++;
                }  
            }
            
                 m[s[end]]++;
                 res = max(res,end-start+1);
                 cout<<res<<" ";
          
            end++;
        }
        return res;
    }
