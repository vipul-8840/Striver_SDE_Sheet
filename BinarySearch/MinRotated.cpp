#include<bits/stdc++.h>
using namespace std ;

//linear search approch 
int findMin(vector<int>& nums) {
    int ans = nums[0];
    for(int i=1;i<nums.size();i++)
    {
        ans = min(ans,nums[i]);
    }
    return ans;
}

//Binary Seacrh approach to solve this problem 
int findMin(vector<int>& nums) {
int start = 0;
int end = nums.size()-1;
int ans = INT_MAX;
while(start<=end)
{
    int mid = start + (end-start)/2;
    if(nums[start]<=nums[end])
    {
        ans = min(ans,nums[start]);
        break;
    }

    else if (nums[start]<=nums[mid])
    {
        ans = min(ans,nums[start]);
        start = mid +1;
    }
    else {

        ans = min(ans,nums[mid]);
        end = mid-1;

    }
}
return ans;
}
