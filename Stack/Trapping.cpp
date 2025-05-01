#include <bits/stdc++.h>
using namespace std;

// int trap(vector<int>& height)
//  {
//     int n = height.size();
//     vector<int>left(n,0);
//     vector<int>right(n,0);
//     int lmax= height[0];
//     int r_max = height[n-1];
//     for(int i=1;i<n;i++)
//     {
//         if(height[i]>lmax)
//         {
//              lmax = height[i];
//         }
//         else{
//                left[i]=lmax;
//         }
//     }
//     for(int i=n-2;i>=0;i--)
//     {
//         if(height[i]>r_max)
//         {
//              r_max = height[i];
//         }
//         else{
//                right[i]=r_max;
//         }
//     }
//     int sum = 0;
//     for(int i=0;i<n;i++)
//     {
//         int a = min(left[i],right[i]);
//         if(a<height[i])
//          sum+=0;
//          else{
//                sum+=abs(height[i]-a);
//          }
//     }
//     return sum;
    
// }

int trap(vector<int>& height) 
    {
        int n = height.size();
       int index = 0;
       for(int i=1;i<n;i++)
       {
           if(height[i]>height[index])
           {
              
              index = i;
           }
       } 
       int leftmax = 0;
       int sum = 0;
       int rmax = 0;
       for(int i=0;i<index;i++)
       {
            if(leftmax<height[i])
            {
                 leftmax = height[i];
            }
            else{
                   sum+=leftmax-height[i];
            }
       }
       for(int i=n-1;i>index;i--)
       {
           if(rmax<height[i])
           {
               rmax = height[i];

           }  
           else{
               sum+=rmax-height[i];
           }
       }
       return sum;
    }