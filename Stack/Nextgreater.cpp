#include <bits/stdc++.h>
using namespace std;

int findgreatest(vector<int>& nums2,int j)
{
    for(int i = j+1;i<nums2.size();i++)
    {
        if(nums2[i]>nums2[j])
        {
            return nums2[i];
        }
    }
    return -1;
}
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
 {
     vector<int> ans;
      for(int i=0;i<nums1.size();i++)
      {
           int num = nums1[i];
           for(int j=0;j<nums2.size();j++)
           {
                    if(nums2[j]==num)
                    {
                        int a = findgreatest(nums2,j);
                        ans.push_back(a);
                    }
           }
      }
  return ans;
}
