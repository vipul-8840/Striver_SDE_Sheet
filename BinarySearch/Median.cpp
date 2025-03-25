#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int  m = nums1.size();
    int n = nums2.size();
    vector<int>num;
    int i = 0,j=0;
    while(i<m && j<n)
    {
        if(nums1[i]<=nums2[j])
        {
            num.push_back(nums1[i]);
            i++;
        }
        else{
            num.push_back(nums2[j]);
            j++;
        }
    }

    while(i<m)
    {
        num.push_back(nums1[i]);
        i++;
    }
    while(j<n)
    {
        num.push_back(nums2[j]);
        j++;
    }

    if((m+n)%2==0)
    {
           double ans = (double)( (double)num[(m+n)/2]+(double)num[(m+n)/2 -1])/2;
           return ans;
    }
    else{
        double ans = (double)num[(m+n)/2];
        return ans;
    }
    return 0;
}