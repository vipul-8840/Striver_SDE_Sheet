#include <bits/stdc++.h>
using namespace std;


        string largestOddNumber(string s)
         {
            string ans="";
            for(int i =s.size()-1;i>=0;i--)
            {
                if(s[i]%2==1)
                {
                    for(int j=0;j<=i;j++)
                    {
                        ans+=s[j];
                    }
                    break;
                }
            } 
    
           return ans;
    
          }
   