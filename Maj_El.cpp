#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums)
    {
        int n = nums.size();
        int num_count = n/3;
        vector<int>ans;
        int count = 1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
            {
                count ++;
            }
            else
            {
                if(count>num_count)
                {
                    ans.push_back(nums[i-1]);
                }
                count = 1;
            }
       

        }
         if(count>num_count)
         ans.push_back(nums[n-1]);

         return ans;
    }