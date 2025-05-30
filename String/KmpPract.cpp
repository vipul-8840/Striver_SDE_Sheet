#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   void findLps(string s2 , int n ,vector<int> & lps )
   {
        int pre = 0;
        int suf=1;
       while(suf<n)
       {
        if(s2[suf]==s2[pre])
         {
            lps[suf]=pre+1;
            suf++;
            pre++;
         }
         else
         {
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
   }
    int strStr(string s1, string s2)
     {
        int n = s2.size();
        vector<int>lps(n,0);
        findLps(s2,n,lps);

        int m = s1.size();
        int first = 0;
        int second = 0;
        while(first<m && second<n)
        {
             if(s1[first]==s2[second])
             {
                first++;
                second++;
             }
             else
             {
               if(second==0)
                first++;
                else{
                    second=lps[second-1];
                }
             }
        }
        if(second==n)
        return first-second;

        return -1;
     }
};