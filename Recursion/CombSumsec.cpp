#include<bits/stdc++.h>
using namespace std ;
void find(vector<int>& arr,int index, int target,vector<int>&temp,vector<vector<int>> &ans)
{
    if(target==0)
    {
        ans.push_back(temp);
        return ;
    }
    for(int i=index ;i<arr.size();i++)
    {
        if(i>index && arr[i]==arr[i-1])
        continue;
        if(arr[i]>target)
        break;
        temp.push_back(arr[i]);

        find(arr,i+1,target-arr[i],temp,ans);
        temp.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int>& arr, int target) 
{
       sort(arr.begin(),arr.end());
       vector<vector<int>> ans;
       vector<int>temp;
       find(arr,0,target,temp,ans);
       return ans;

}