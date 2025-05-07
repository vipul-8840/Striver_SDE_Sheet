#include <bits/stdc++.h>
using namespace std;

int numberOfSubstrings(string s)
     {
        
        int start = 0;
        int end = 0;
        int n = s.size();
        int hash[3]={0};
        int res = 0;
        while(end<n)
        {
            hash[s[end]-'a']++;
            while(start<end && hash[0]>=1 && hash[1]>=1 && hash[2]>=1)
            {
                res = res + (n-end);
                hash[s[start]-'a']--;
                start++;

            }
            end++;
        }
        return res;
    }
