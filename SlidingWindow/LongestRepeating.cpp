
#include <bits/stdc++.h>
using namespace std;



// int characterReplacement(string s, int k)
//     {
//          int n = s.size();
//          int res=0;
//         for(int i=0;i<n;i++)
//         {
//             int hash[26]={0};
//             int maxfrq=0;
//           for(int j=i;j<n;j++)
//           {
//              hash[s[j]-'A']++;

//              maxfrq=max(maxfrq,hash[s[j]-'A']);
//              int changes = (j-i+1)-maxfrq;
//              if(changes<=k)
//              {
//                 res = max(res,j-i+1);
//              }
//              else{
//                 break;
//              }

//           }
//         }
//         return res;  
//     }


int characterReplacement(string s, int k) 
    {
        int res = 0;
        int maxfeq=0;
        int n = s.size();
        int end = 0;
        int start = 0;
        int hash[26]={0};
        int maxfreq = 0;
        while(end<n)
        {
             hash[s[end]-'A']++;
             maxfreq=max(hash[s[end]-'A'],maxfreq);
             int len = end-start+1;
             if(len-maxfreq>k)
             {
                hash[s[start]-'A']--;
                start++;
               
             }
            
             res = max(res,end-start+1);          
             end++;

        }
        return res;
    }