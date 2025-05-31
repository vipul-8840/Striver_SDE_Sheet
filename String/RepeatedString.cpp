#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void findLps(string & b , int n , vector<int> & lps)
    {
        int pre = 0;
        int suf = 1;
        while(suf<n)
        {
            if(b[pre]==b[suf])
            {
                lps[suf]=pre+1;
                pre++;
                suf++;
            }
            else
            {

               if(pre==0)
               suf++;
               else
               {
                  pre=lps[pre-1];
               }
            }
           

        } 
    }
    int repeatedStringMatch(string a, string b)
     {
            int m = a.size();
            int n = b.size(); 
            int count = 1;
            string s = a;
            while(s.size()<b.size())
            {
                s = s + a;
                count++;
            }
            vector<int>lps(n,0); 
            findLps(b,n,lps);
             int first = 0;
             int second = 0;
            while(second<n && first<s.size())
            {
                 if(s[first]==b[second])
                 {
                    first++;
                    second++;
                 }
                 else
                 {
                     if(second==0)
                        first++;

                     else{
                        second = lps[second-1];
                     }
                      
                 }
            }

            if(second==n)
            return count;
             s= s + a;
             second = 0;
             first = 0;
             while(second<n && first<s.size())
            {
                 if(s[first]==b[second])
                 {
                    first++;
                    second++;
                 }
                 else
                 {
                     if(second==0)
                        first++;

                     else{
                        second = lps[second-1];
                     }
                      
                 }
            }
            if(second==n)
            return count+1;

            return -1;




}
};
