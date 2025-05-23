// m-1 first method with space complexity

#include <bits/stdc++.h>
using namespace std;

// int trap(vector<int>& height) 
// {
//     int n = height.size();
//     cout<<n<<endl;
//     int total =0;
//     vector<int> pre(n,0);
//     vector<int> suf(n,0);
//     pre[0] = height[0];
//     suf[n-1] = height[n-1];
//     for(int i=1;i<n;i++)
//     {
//         pre[i] = max(pre[i-1],height[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<pre[i]<<" ";
//     }
//     cout<<endl;
//     for(int j=n-2;j>=0;j--)
//     {
//         suf[j] = max(suf[j+1],height[j]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<suf[i]<<" ";
//     }
//     for(int i=0;i<n;i++)
//     {
//        total+=min(pre[i],suf[i]) - height[i];
//     }
//     return total;
// }

// m-2 method without using space complexity
int trap(vector<int>& height)
     {
        int n = height.size();
        int left_max = 0,total = 0 ;
        int right_max =0 ;
        int l = 0, r = n-1;

        while(l<r)
        {
            if(height[l]<=height[r])
            {
                if(left_max>height[l])
                {
                    total+=left_max - height[l];
                }
                else {
                    left_max = height[l];
                }
                l++;
            }
            else
            {
                if(right_max>height[r])
                {
                    total+=right_max - height[r];
                }
                else {
                    right_max = height[r];
                }
                r--;
            }
        }
        return total;
    }