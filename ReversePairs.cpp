#include <bits/stdc++.h>
using namespace std;

 void countPairs(vector<int>& nums, int& count, int start, int mid, int end) {
        int j = mid + 1;
        for (int i = start; i <= mid; i++) {
            while (j <= end && nums[i] > 2LL * nums[j]) {
                j++;
            }
            count += (j - (mid + 1));
        }
    }
    void Merge(vector<int>& nums,int & count,int start,int mid,int end)
    {
        vector<int> ans;
        int i = start;
        int j = mid+1;
        while(i<=mid && j<=end)
        {
            if(nums[i]<nums[j])
            {
                ans.push_back(nums[i]);
                i++;
            }
            else
            {
             

                ans.push_back(nums[j]);

                j++;
            }
        }
    while(i<=mid)
    {
        ans.push_back(nums[i]);
        i++;
    }
    while(j<=end)
    {
        ans.push_back(nums[j]);
        j++;
    }
     for(int k=0;k<ans.size();k++)
     {
        nums[start]=ans[k];
        start++;
     }
      return ;
    }
    void mergeSort(vector<int>& nums,int & count,int start ,int end)
    {
        if(start>=end)
        return ;
        int  mid = start + (end-start)/2;
       mergeSort(nums,count,start,mid);
       mergeSort(nums,count,mid+1,end);
       countPairs(nums, count, start, mid, end);
       Merge(nums,count,start,mid,end);
       return ;
    }
    int reversePairs(vector<int>& nums) 
    {
        int count = 0;
        mergeSort(nums,count,0,nums.size()-1);
        return count;

    }