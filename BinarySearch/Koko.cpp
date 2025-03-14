#include <bits/stdc++.h>
using namespace std;
int minEatingSpeed(vector<int>& piles, int h) 
    {
        int n = piles.size();
        sort (piles.begin(),piles.end());
        int low = 1;
   int high = piles[n-1];
   int ans = 0;
   while(low<=high)
   {
       int mid = low + (high-low)/2;
       long long sum = 0;
       for(int i=0;i<n;i++)
       {
           sum+=ceil(double(piles[i])/double(mid));
       }
       if(sum<=h)
       {
          ans = mid;
          high = mid-1;
       }
       else{
           low=mid+1;
       }
   }
   return ans;
        
    }