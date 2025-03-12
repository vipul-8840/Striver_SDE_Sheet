#include <bits/stdc++.h>
using namespace std;

// m-1 solve the problem in liner time complexity
int findKRotation(vector<int> &arr) {
//    int n = arr.size();
//   for(int i=n-1;i>0;i--)
//   {
//       if(arr[i]<arr[i-1])
//         return i-0;
//   }
    
//     return 0;
    
}
// m-2 Binary Search method 
int findKRotation(vector<int> &nums) {
   
    
     int start = 0;
    int end = nums.size()-1;
    int index = 0;
    int ans = INT_MAX;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        // if(nums[start]<=nums[end])
        // {
        //     if(ans<=nums[start])
        //     {
        //         ans = nums[start];
        //         index = start;
        //     }
        //     break;
        // }

         if (nums[start]<=nums[mid])
        {
            // ans = min(ans,nums[start]);
            if(ans>=nums[start])
            {
                ans = nums[start];
                index = start;
            }
            start = mid +1;
        }
        else {

            // ans = min(ans,nums[mid]);
            if(ans>=nums[mid])
            {
                ans = nums[mid];
                index = mid;
            }
            end = mid-1;

        }
    }
    return index-0;

}