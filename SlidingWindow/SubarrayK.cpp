#include <bits/stdc++.h>
using namespace std;

int subarraysWithKDistinct(vector<int>& nums, int k)
     
{
   int n = nums.size();
   int count =0;
   for(int i=0;i<n;i++)
   {
       unordered_map<int,int>m;
       for(int j=i;j<n;j++)
       {
          m[nums[j]]++;
          if(m.size()==k)
          count++;

          if(m.size()>k)
          break;
       }
   }
   return count;
}