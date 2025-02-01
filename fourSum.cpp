#include <bits/stdc++.h>
using namespace std;

 vector<vector<int>> fourSum(vector<int>& nums, int target)
     {
    
        set<vector<int>>s;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                set<long long>st;
                for(int k=j+1;k<n;k++)
                {
                    long long sum = nums[i]+nums[j];
                    sum+=nums[k];
                    long long four = target-sum;
                    if(st.find(four)!=st.end())
                    {
                        vector<int>temp = {nums[i],nums[j],nums[k],(int)four};
                        sort(temp.begin(),temp.end());
                        s.insert(temp);
                    }
                    st.insert(nums[k]);

                }
            }
        }
            vector<vector<int>>ans(s.begin(),s.end());
            return ans;
        
    }