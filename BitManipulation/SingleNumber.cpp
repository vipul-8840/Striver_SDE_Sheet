#include<bits/stdc++.h>
using namespace std ;

int singleNumber(vector<int>& nums) 
    {
        int xorss = 0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            xorss^=nums[i];

        }
        return xorss;
    }