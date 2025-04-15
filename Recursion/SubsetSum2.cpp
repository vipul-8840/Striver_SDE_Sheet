#include <bits/stdc++.h>
using namespace std;

// void find(vector<int>&nums,int index ,vector<int>&temp, set<vector<int>>& ans,int n)
//    {
//       if(index==n)
//       {
//         ans.insert(temp);
//         return ;
//       }
      
//         temp.push_back(nums[index]);
//         find(nums,index+1,temp,ans,n);
//         temp.pop_back();
//         find(nums,index+1,temp,ans,n);
    

//    }
//     vector<vector<int>> subsetsWithDup(vector<int>& nums)
//      {
//         int n = nums.size();
//         vector<int>temp;
//         sort(nums.begin(),nums.end());
//          set<vector<int>> ans;
//          find(nums,0,temp,ans,n); 
//           vector<vector<int>>res ;
//          for(auto it : ans)
//          {
//            res.push_back(it);
//          }
//          return res;
//     }

void find(vector<int>nums,int index,vector<int> & temp, vector<vector<int>>&ans ,int n)
{
   ans.push_back(temp);
   for(int i=index;i<n;i++)
   {
    if(i>index && nums[i]==nums[i-1])
    continue;
    temp.push_back(nums[i]);
    find(nums,i+1,temp,ans,n);
    temp.pop_back();

   }
   return ;
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int>temp;
        vector<vector<int>>ans;
        find(nums,0,temp,ans,n);
        return ans;
    }