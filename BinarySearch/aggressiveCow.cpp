#include<bits/stdc++.h>
using namespace std ;

    bool checkPossible(vector<int> &stalls,int mid ,int k)
    {
        int count = 1;
        int last = stalls[0];
        for(int i=1;i<stalls.size();i++)
        {
              if(stalls[i]-last >=mid)
              {
                     count ++;
                     last=stalls[i];
              }
              if(count>=k)
              {
                  return 1;
                  break;
              }
        }
        return 0;
    }

    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
        int n = stalls.size();
        sort(stalls.begin(),stalls.end());
         int low = 1;
         int high = stalls[n-1] -stalls[0];
         int ans = -1;
         while(low<=high)
         {
             int mid = (low + high)/2;
             if(checkPossible(stalls,mid,k)){
                   ans = mid;
              low  = mid+1;
             }
             else{
                 high = mid -1;
             }
         }
         return ans;
    }
