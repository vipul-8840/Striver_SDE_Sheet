#include <bits/stdc++.h>
using namespace std;
// O(n^2)
// int subarraysWithKDistinct(vector<int>& nums, int k)
     
// {
//    int n = nums.size();
//    int count =0;
//    for(int i=0;i<n;i++)
//    {
//        unordered_map<int,int>m;
//        for(int j=i;j<n;j++)
//        {
//           m[nums[j]]++;
//           if(m.size()==k)
//           count++;

//           if(m.size()>k)
//           break;
//        }
//    }
//    return count;
// }

//optimize way

int finding(vector<int>& nums,int k)
{
   if(k<0)
   return 0;
   int start = 0,res=0;
   int end = 0;
   unordered_map<int,int>m;
   int n = nums.size();
   while(end<n)
   {
      m[nums[end]]++;
      while(start<=end && m.size()>k)
      {
           m[nums[start]]--;
           if(m[nums[start]]==0)
           {
               m.erase(nums[start]);
           }
           start++;
      }
      res=res+(end-start+1);
      end++;
   }
   return res;
}
int subarraysWithKDistinct(vector<int>& nums, int k)
{
   
   int res1=finding(nums,k);
   int res2 = finding(nums,k-1);
   return (res1-res2);

}