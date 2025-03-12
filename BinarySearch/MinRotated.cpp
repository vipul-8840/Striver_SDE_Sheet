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
