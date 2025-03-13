#include<bits/stdc++.h>
using namespace std ;

// m-1 linear search approach way 
// int findPeakElement(vector<int>& nums)
//      {
        
//         int n = nums.size();
//         if(n<=1)
//         return 0;
//         if(nums[0]>nums[1])
//         return 0;
//         if(nums[n-1]>nums[n-2])
//         return n-1;
//           for(int i=1;i<n-1;i++)
//           {
//             if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
//             {
//                 return i ;
//                 break;

//             }
//           }
//           return -1;
//     }
//m-2 Binary Search
int findPeakElement(vector<int>& nums)
{
   
   int n = nums.size();
   if(n<=1)
   return 0;
   if(nums[0]>nums[1])
   return 0;
   if(nums[n-1]>nums[n-2])
   return n-1;
   int low = 1;
   int high = n-2;
   while(low<=high)
   {
       int mid = low + (high-low)/2;
       if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
       return mid;
       else if (nums[mid]<nums[mid+1])
      low = mid+1;
       else{
          high = mid-1;
       }




   }
    
     return -1;
}