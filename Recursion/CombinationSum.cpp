#include <bits/stdc++.h>
using namespace std;
//recursive way  
void find(vector<int>& arr,int index,vector<vector<int>>&ans,vector<int>&res,int target)
{
    if(index==arr.size())
    {
        if(target==0)
        {
             ans.push_back(res);

        }
         return ;
    }
    if(target==0)
    {
        ans.push_back(res);
        return ;
    }
     if(target<0)
    return ;
    if(target>0)
     {
         res.push_back(arr[index]);
         find(arr,index,ans,res,target-arr[index]);
         res.pop_back();
     }
     find(arr,index+1,ans,res,target);

}
vector<vector<int>> combinationSum(vector<int>& arr, int target) {
    
     vector<vector<int>> ans ;
     vector<int>res;
     find(arr,0,ans,res,target);
     return ans;

}
