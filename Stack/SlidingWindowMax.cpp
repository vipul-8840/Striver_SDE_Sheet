#include <bits/stdc++.h>
using namespace std;

// vector<int> maxSlidingWindow(vector<int>& nums, int k) 
// {
//         int maxi = INT_MIN;
//          int n = nums.size();
//         vector<int>ans;
//         if(k==1)
//         {
//             for(int i=0;i<n;i++)
//             {
//                 ans.push_back(nums[i]);
//             }
//             return ans;
//         }

//         for(int i=0;i<k;i++)
//         {
//             maxi =  max(maxi,nums[i]);
//         }
//         ans.push_back(maxi);
//             int i = 1; 
           
//      while(k+i<=n)
//     {
//         int start = i;
//         int end = i+k;
//         maxi = INT_MIN;
//         while(start<end)
//         {
//             maxi = max(maxi,nums[start]);
//             start++;
//         }
//         ans.push_back(maxi);
//         i++;
//     }
//     return ans ;
// }

vector<int> maxSlidingWindow(vector<int>& nums, int k) 
    {
         deque<int>dq;
         stack<int>st;
          vector<int>ans;
          int n = nums.size();
         for(int i=0;i<n;i++)
         {
            while(!dq.empty() && nums[i]>=nums[dq.back()])
            {
                dq.pop_back();
            }
            while(!dq.empty() && dq.front()<=i-k)
            dq.pop_front();
            dq.push_back(i);
            if(i>=k-1)
            {
                ans.push_back(nums[dq.front()]);
            }
         }
         return ans;
    }
