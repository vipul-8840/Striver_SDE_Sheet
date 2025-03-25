#include<bits/stdc++.h>
using namespace std ;
bool checkPossible(vector<int>& nums,int mid , int k)
     {
        int count = 1;
        int  sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>mid)
              return 0;
            if(sum+nums[i]<=mid)
            {
                sum+=nums[i];
            }
            else{
                count++;
                sum=nums[i];
            }
        }
        if(count<=k)
        return 1;
        return 0;
     }
    int minTime(vector<int>& nums, int k)
    {
        // code here
        // return minimum time
        int mini =nums[0];
        int sum = nums[0];
        int ans = -1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<mini)
            mini=nums[i];

            sum+=nums[i];
        }

        int low = mini;
        int high = sum;
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(checkPossible(nums,mid,k))
            {
                ans=mid;
               high=mid-1;
            }
            else
             low = mid+1;
        }
        return ans;
        
    }