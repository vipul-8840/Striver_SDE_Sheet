#include <bits/stdc++.h>
using namespace std;
// O(n)
int longestConsecutive(vector<int>& nums) 
    {
        unordered_set<int>s;
        int maxi = 1;
       
        if(nums.size()==0)
        return 0;

        for(int i=0;i<nums.size();i++)
        {
           s.insert(nums[i]);
        }
        
        for(auto it:s)
        {
            int x = it;
            int count=1;
            if(s.find(x-1)==s.end())
            {
              
                while(s.find(x+1)!=s.end())
                {
                    x = x+1;
                    count++;
                }
                
            }

            maxi = max(count,maxi);
        }
        return maxi;
    }
