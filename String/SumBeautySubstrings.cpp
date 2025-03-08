#include <bits/stdc++.h>
using namespace std;

int beautySum(string s) 
{

    int count = 0;
    for(int i=0;i<s.size();i++)
    {
        int hash[26]={0};
        int maxi = 0;

        for(int j=i;j<s.size();j++)
        {
            hash[s[j]-'a']++;
            maxi = max(maxi,hash[s[j]-'a']);
            int mini = INT_MAX;
            for(int k=0;k<26;k++)
            {
                if(hash[k]>0)
                {
                    mini = min (mini,hash[k]);
                }
            }
           count+=(maxi-mini);
        }
        
    }
    return count;
}