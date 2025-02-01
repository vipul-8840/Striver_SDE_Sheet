#include <bits/stdc++.h>
using namespace std;

//first method which is brute force approach 

//  vector<vector<int>> fourSum(vector<int>& nums, int target)
//      {
    
//         set<vector<int>>s;
//         int n = nums.size();
//         for(int i=0;i<n;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 set<long long>st;
//                 for(int k=j+1;k<n;k++)
//                 {
//                     long long sum = nums[i]+nums[j];
//                     sum+=nums[k];
//                     long long four = target-sum;
//                     if(st.find(four)!=st.end())
//                     {
//                         vector<int>temp = {nums[i],nums[j],nums[k],(int)four};
//                         sort(temp.begin(),temp.end());
//                         s.insert(temp);
//                     }
//                     st.insert(nums[k]);

//                 }
//             }
//         }
//             vector<vector<int>>ans(s.begin(),s.end());
//             return ans;
        
//     }



class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;

        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            continue;
            for(int j=i+1;j<n;j++)
            {
              if(j!=i+1 && nums[j]==nums[j-1])
              continue;

              int start = j+1;
              int end = n-1;
              while(start<end)
              {
                long long sum=nums[i];
                sum+=nums[j];
                sum+=nums[start];
                sum+=nums[end];
                if(sum==target)
                {
                    vector<int>temp={nums[i],nums[j],nums[start],nums[end]};
                    ans.push_back(temp);
                    start++;
                    end--;
                    while(start<end && nums[start]==nums[start-1])
                    {
                        start++;
                    } 
                    while(end>start && nums[end]==nums[end+1])
                    {
                        end--;
                    }
                }
                else if (sum>target)
                {
                    end--;
                }
                else{
                    start++;
                }
              }
            }
        }
       return ans; 
    }
};