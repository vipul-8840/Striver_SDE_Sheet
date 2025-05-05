#include <bits/stdc++.h>
using namespace std;

// int longestOnes(vector<int>& nums, int k) 
// {
    
//     int n = nums.size();
//     int res = 0;
//     for(int i=0;i<n;i++)
//     {
//         int count = 0;
//         int j=i;
//         while(j<n  )
//         {
//             if(nums[j]==0 && count>=k)
//              break;

//             if(nums[j]==0)
//             {
//                 count++;
//             }
//             j++;
//         }
//         res = max(res,(j-i));
//     }
//     return res;
// }

int longestOnes(vector<int>& nums, int k)
     {
        int start = 0;
        int end= 0;
        int n = nums.size();
        int count =0;
        int res = 0;
        while(end<n)
        {
            if(nums[end]==0)
            count++;
            
            while(start<=end  && count>=(k+1) && nums[end]==0)
            {
                if(nums[start]==0)
                  count--;
                
                start++;
            }
           res = max(res,end-start+1);

          
            end++;
        }
        
        return res;
    }