#include<bits/stdc++.h>
using namespace std ;

int maxDepth(string s) 
{
    int count = 0;
    int ans = 0;

    for(int i = 0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            count++;
            ans = max(ans,count);
        }
        else if (s[i]==')'){
            count--;
        }
        else
        {
            continue;
        }
    }
    return ans ;
}