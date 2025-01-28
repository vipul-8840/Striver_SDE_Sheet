#include <bits/stdc++.h>
using namespace std;

 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
     {
        vector<int>ans;
        int i =0;
        int j=0;
        int k =0;
        if(n==0)
        {
            return ;
            
        }
        if(m==0)
        {
            nums1.erase(nums1.begin(),nums1.end());
            for(int p =0;p<n;p++)
            {
                nums1.push_back(nums2[p]);
            }
            return ;
        }
        while(k<m && j<n)
        {

            if(nums1[i]<=nums2[j])
            {
               ans.push_back(nums1[i]);
               i++;
               k++;
            }
            else
            {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(k<m)
        {
            ans.push_back(nums1[k]);
            k++;
        }
        while(j<n)
        {
            ans.push_back(nums2[j]);
            j++;
        }
        nums1.erase(nums1.begin(),nums1.end());
        for(int p=0;p<ans.size();p++)
        {
           nums1.push_back(ans[p]);
        }
        return ;
    }
