#include <bits/stdc++.h>
using namespace std;

int longestOnes(vector<int>& nums, int k) 
{
    
    int n = nums.size();
    int res = 0;
    for(int i=0;i<n;i++)
    {
        int count = 0;
        int j=i;
        while(j<n  )
        {
            if(nums[j]==0 && count>=k)
             break;

            if(nums[j]==0)
            {
                count++;
            }
            j++;
        }
        res = max(res,(j-i));
    }
    return res;
}