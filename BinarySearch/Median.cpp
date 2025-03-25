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


// binary search method 
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
{
    int m = nums1.size();
    int n = nums2.size();
    if(m>n) return findMedianSortedArrays(nums2,nums1);
    int left = (m+n+1)/2;
    int low = 0;
    int high = m;
    while(low<=high)
    {
        int mid1 = low + (high-low)/2;
        int mid2= left-mid1;
        int l1 = (mid1 == 0) ? INT_MIN : nums1[mid1 - 1];
        int l2 = (mid2 == 0) ? INT_MIN : nums2[mid2 - 1];
        int r1 = (mid1 == m) ? INT_MAX : nums1[mid1];
        int r2 = (mid2 == n) ? INT_MAX : nums2[mid2];
        if (l1 <= r2 && l2 <= r1) 
        {
            if ((m + n) % 2 == 1) return max(l1, l2);
            return (max(l1, l2) + min(r1, r2)) / 2.0;
        }
        
        else if (l1 > r2) high = mid1 - 1;
        else low = mid1 + 1;
    }
   return 0;
}