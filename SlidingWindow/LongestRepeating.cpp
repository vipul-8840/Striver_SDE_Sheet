
#include <bits/stdc++.h>
using namespace std;



int characterReplacement(string s, int k)
    {
         int n = s.size();
         int res=0;
        for(int i=0;i<n;i++)
        {
            int hash[26]={0};
            int maxfrq=0;
          for(int j=i;j<n;j++)
          {
             hash[s[j]-'A']++;

             maxfrq=max(maxfrq,hash[s[j]-'A']);
             int changes = (j-i+1)-maxfrq;
             if(changes<=k)
             {
                res = max(res,j-i+1);
             }
             else{
                break;
             }

          }
        }
        return res;  
    }