#include <bits/stdc++.h>
using namespace std;

void findLps(string s ,int m , vector<int> & lps)
    {
           int pre = 0;
           int suf = 1;
           while(suf<m)
           {
                if(s[pre]==s[suf])
                {
                    lps[suf]=pre+1;
                    suf++;
                    pre++;
                    
                }
                else
                {
                    if(pre==0)
                    suf++;
                    
                    else{
                        pre=lps[pre-1];
                        }
                }
           }
    }
    int minChar(string& s)
    {
        // Write your code here
        
        int n = s.size();
       string str = s;
        reverse(str.begin(),str.end());
      
      s+="#" + str;
      int m = s.size();
      vector<int>lps(m,0);
      
       findLps(s,m,lps);
       
       return n - lps[m-1];
      
       
    
    }
