#include<bits/stdc++.h>
using namespace std ;

void find(int l, vector<string>& ans, int r , string&temp,int n)
{
    if(l+r==2*n)
    {
        ans.push_back(temp);
        return;
    }
    if(l<n && l>=r)
    {
       temp.push_back('(');
       find(l+1,ans,r,temp,n);
       temp.pop_back();
       
    }
    if(r<n)
    {
        temp.push_back(')');
        find(l,ans,r+1,temp,n);
        temp.pop_back();
    }
}
vector<string> generateParenthesis(int n)
 {
    int l = 0;
    int r = 0;
    vector<string> ans;
    string temp;
  find(0,ans,0,temp,n);
  return ans;  
}