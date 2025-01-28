#include<bits/stdc++.h>
using namespace std;
 int majorityElement(vector<int>& nums)
    {
        int n = nums.size();
        int count = 0;
        int major_el;
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                count=1;
                major_el = nums[i];
            }
           else if(nums[i]==major_el)
            {
                count++;
            }
           else
            {
              count--;
                
            }
        }
        return major_el;      
    }