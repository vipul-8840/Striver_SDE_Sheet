#include <bits/stdc++.h>
using namespace std;

int finding(vector<int>& nums,int goal)
{
    if(goal<0)
    return 0;
    int start=0;
    int end= 0;
    int n = nums.size();
    int res = 0;
    int sum = 0;
    while(end<n)
    {
         sum = sum + nums[end];
         while(start<=end && sum>goal)
         {
            sum=sum-nums[start];
            start++;
         }
         res = res + (end-start+1);

         end++;
    }
    return res;

}
int numSubarraysWithSum(vector<int>& nums, int goal)
{
    int res1= finding(nums,goal);
    int res2 = finding(nums,goal-1);
    cout<<res1 << " " <<res2;
    return res1-res2;
      
}