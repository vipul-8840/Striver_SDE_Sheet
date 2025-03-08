#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
         
    int start = 0;
    int end = nums.size()-1;
    int ans = 0;
    if(nums[0]>target)
     return 0;
    while(start<=end)
    {
        int mid  = start + (end-start)/2;
        if(nums[mid]==target)
        return mid;
        else if (nums[mid]<target)
         start = mid+1;
         else{
            ans = mid ;
            end = mid-1;
         }
    }
     if(nums[end]<=target)
     return end+1;
   
    return ans;
}
