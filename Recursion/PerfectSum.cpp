#include <bits/stdc++.h>
using namespace std;

void find(vector<int>& arr,int index,int  sum,int target,int & count)
   {
       if(index == arr.size()) {
           if(sum == target) {
               count++;
           }
           return;
       }

      find(arr,index+1,sum,target,count);
    
       find(arr,index+1,sum+arr[index],target,count);
       
      
   }
    int perfectSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int count = 0;
         int sum = 0;
         find(arr,0,sum,target,count);
        return count;
    }