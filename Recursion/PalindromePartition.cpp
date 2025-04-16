#include<bits/stdc++.h>
using namespace std ;
bool palindrome(string s1)
{
   string s2 = s1;
   reverse(s2.begin(),s2.end());
   return s1==s2;
}
 void find(string s ,vector<vector<string>>& ans ,vector<string> & temp)
 {
     if(s.size()==0)
     {
         ans.push_back(temp);
         return ;
     }
     for(int i=0;i<s.size();i++)
     {
         string part = s.substr(0,i+1);
         if(palindrome(part))
         {
             temp.push_back(part);
             find(s.substr(i+1),ans,temp);
             temp.pop_back();
         }
     }
 }
 vector<vector<string>> partition(string s) {
     vector<vector<string>> ans ;
     vector<string>temp;
     find(s,ans,temp);
     
     return ans;
 }