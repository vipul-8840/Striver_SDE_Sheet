#include <bits/stdc++.h>
using namespace std;
//greedy approach
bool canJump(vector<int>& nums) 
    {
        
        int maxIndex = 0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(i>maxIndex)
            return false;

            maxIndex = max(maxIndex,i+nums[i]);
        }
        if(maxIndex>=nums.size()-1)
        return true;

        return false;
    }
