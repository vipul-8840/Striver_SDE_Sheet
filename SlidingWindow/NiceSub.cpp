#include <bits/stdc++.h>
using namespace std;
int finding(vector<int>& nums, int k)
    {
        if(k<0)
        return 0;
       int start=0,end=0;
       int res = 0;
       int n = nums.size();
       int count=0;
       while(end<n)
       {
        if(nums[end]%2==1)
        count++;
        while(start<=end && count>k)
        {
            if(nums[start]%2==1)
            count--;

            start++;
        }

           res =res+ (end-start+1);
           end++;  
       }
       return res ;

    }
    int numberOfSubarrays(vector<int>& nums, int k)
    {
      int res1=  finding(nums,k-1);
        int res2 = finding(nums,k);
        cout<<res1 <<" "<<res2;
        return res2-res1;
        
    }