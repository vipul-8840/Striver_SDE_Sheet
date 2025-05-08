#include <bits/stdc++.h>
using namespace std;

string minWindow(string s, string t)
    {
        int start = 0;
        int end = 0,count=0;
        int startInd=-1;
        int n = s.size();
        int m = t.size();
        int hash[256]={0};
        int mini = n;

        for(int i=0;i<m;i++)
        {
            hash[t[i]]++;
        }
        while(end<n)
        {
            if(hash[s[end]]>0)
            {
                count++;
            }
            hash[s[end]]--;
           
               
               while( count==m)
               {
                        if(end-start+1<=mini)
                    {
                        mini=end-start+1;
                        startInd = start;
                    }
                   hash[s[start]]++;
                   if(hash[s[start]]>0)
                   {
                      count--;
                   }
                   start++;
               }
          
          end++;
        }
        return startInd==-1 ? "":s.substr(startInd,mini);
    }


// class Solution {
//     public:
//         string minWindow(string s, string t) 
//         {
//                 int n = s.size();
//                 int m = t.size();
//                 int mini = INT_MAX;
//                 int startIndex = -1;
//             for(int i=0;i<n;i++)
//             {
//                 int count=0;
//                 int hash[128]={0};
//                 for(int j=0;j<m;j++)
//                 {
//                     hash[t[j]]++;
                  
//                 }
//                 for(int j=i;j<n;j++)
//                 {
//                     if(hash[s[j]]>0)
//                     {
//                         count++;
//                     }
//                     hash[s[j]]--;
//                     if(count==m)
//                     {
//                         if(j-i+1<mini)
//                         {
//                             mini = j-i+1;
//                             startIndex = i;
    
//                         }
//                          break;
//                     }
//                 }
//             }
    
          
//             return (startIndex == -1) ? "" : s.substr(startIndex, mini);
    
//         }
//     };