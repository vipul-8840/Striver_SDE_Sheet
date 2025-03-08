#include <bits/stdc++.h>
using namespace std;

int firstOcc(vector<int>& nums, int target)
{
    int ans = -1;
    int start = 0;
    int end = nums.size()-1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(nums[mid]==target)
        {
            ans = mid;
            end = mid-1;
        }
        else if(nums[mid]>target)
         end = mid-1;
        else{
            start = mid + 1;
        }
    }
   return ans ;
}
int lastOcc(vector<int>& nums, int target)
{
    int ans = -1;
    int start = 0;
    int end = nums.size()-1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(nums[mid]==target)
        {
            ans = mid;
            start=mid + 1;
        }
        else if (nums[mid]<target)
         start = mid +1;
        else{
           end= mid - 1;
        }
    }
   return ans ;
}
 
    int countFreq(vector<int>& nums, int target)
    {
        // code here
        
         int first= firstOcc(nums,target);
         int  last = lastOcc(nums,target);
         if(first==-1)
         return 0;
         
         return (last-first+1);
        
        
    }
