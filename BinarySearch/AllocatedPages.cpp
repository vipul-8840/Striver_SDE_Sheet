#include<bits/stdc++.h>
using namespace std ;

bool checkPossible(vector<int> &arr,int maxAllowed, int k)
  {
      int count=1, pages = 0;
      for(int i=0;i<arr.size();i++)
      {
          if(arr[i]>maxAllowed)
          {
              return false;
          }
          if(pages+arr[i]<=maxAllowed)
          {
              pages+=arr[i];
          }
          
          else{
              count++;
              pages=arr[i];
          }
      }
      return count<=k?1:0;
  }
    int findPages(vector<int> &arr, int k) {
        // code here
        
        int n = arr.size();
        if(k>n)
        return -1;
        int mini = arr[0];
        int sum = arr[0];
        int ans = -1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]<mini)
            mini=arr[i];
            
            sum+=arr[i];
            
        }
        int low = mini;
        int high = sum;
        while(low<=high)
        {
            int mid = low +(high-low)/2;
            if(checkPossible(arr,mid,k))
            {
                ans = mid;
               high = mid-1;
            }
            else
            low=mid+1;
        }
        return ans;
    }
