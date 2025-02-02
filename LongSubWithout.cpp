#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
     {
          int hash[255]={0};
          int left =0;
          int right=0;
          int maxi =1;
          if(s.size()==0)
          return 0;

          while(right<s.size())
          {
            if(hash[s[right]]==0)
            hash[s[right]] = 1;
            else
            {
                maxi = max(maxi,right-left);
                cout<<maxi<<endl;
                while(left<right && hash[s[right]]==1)
                {
                      hash[s[left]]=0;
                    left++;
                }
                hash[s[right]]=1;

            }
            right++;
        }
            maxi = max(maxi,right-left);
            return maxi;

     }
     