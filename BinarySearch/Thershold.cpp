#include <bits/stdc++.h>
using namespace std;

int smallestDivisor(vector<int>& nums, int threshold)
{
   int n = nums.size();
   sort(nums.begin(),nums.end());
   int low = 1;
   int high = nums[n-1];
   int ans = INT_MAX;
   while(low<=high)
   {
       int mid = low + (high-low)/2;
       int sum = 0;
       for(int i=0;i<n;i++)
       {
           sum+=ceil(double(nums[i])/double(mid));
       }
       if(sum<=threshold)
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