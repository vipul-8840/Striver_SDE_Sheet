#include <bits/stdc++.h>
using namespace std;

//   int minJump(vector<int>&nums,int index,int count)
//    {
//     int n = nums.size();
      
//       if(index>=n-1)
//       return count;
//       if(nums[index]==0)
//       {
//         return nums.size()+1;
//       }
//        int mini = nums.size()+1;

//       for(int i=1;i<=nums[index];i++)
//       {
//          mini = min (mini,minJump(nums,index+i,count+1));
//       }

//       return mini;


//    }
//     int jump(vector<int>& nums) {
//           int n = nums.size()+1;
//     int a =  minJump(nums,0,0);
//     return  n==a?-1:a;
        
//     }

// optimize way 

