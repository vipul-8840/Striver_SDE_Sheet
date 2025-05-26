#include <bits/stdc++.h>
using namespace std;

//longest prefix suffix
 int longestPrefixSuffix(string &s) {
        // Your code goes here
        int n = s.size();
        vector<int>lps(n,0);
        int pre = 0;
       int suf = 1;
        lps[0]=0;
        
       while(suf<n)
        {
           if(s[pre]==s[suf])
           {
               lps[suf]=pre+1;
               suf++;
               pre++;
           }
           else{
               if(pre==0)
               {
                   lps[suf]=0;
                   suf++;
               }
               else{
                   pre = lps[pre-1];
               }
           }
        }
        return lps[n-1];
    }