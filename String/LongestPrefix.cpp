#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& s) {
    if(s.size()==1)
     return s[0];
    int ans = INT_MAX;

    for(int i = 1;i<s.size();i++)
    {

       int j = 0;
       while(j<s[0].size() && j<s[i].size() )
       {
           if(s[0][j]==s[i][j])
           {
            j++;
           }
           else{
              
              break;
           }
       }
       ans = min(ans,j);
    }
    cout<<ans;

    if(ans==INT_MAX)
    return "";

    string res = "";
    for(int i=0;i<ans;i++)
    {
         res+=s[0][i];
    }
   
    return res;
}