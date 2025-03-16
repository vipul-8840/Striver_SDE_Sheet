#include <bits/stdc++.h>
using namespace std;

        int isPossible(vector<int>& arr,int day, int m, int k)
        {
            int count = 0;
            int bloom = 0;
            for(int i=0;i<arr.size();i++)
            {
                if(arr[i]<=day)
                {
                    count++;
                }
                else{
                    bloom+=count/k;
                    count=0;
                }
            }
            bloom+=count/k;
            if(bloom>=m)
            {
                return 1;
            }
            return 0;
        }
        int minDays(vector<int>& arr, int m, int k)
         {
            int n = arr.size();
            int mini = arr[0];
            int maxi = arr[0];
            for(int i=1;i<n;i++)
            {
              mini = min (arr[i],mini);
              maxi= max(arr[i],maxi);
            }
            int low = mini;
    
            int high = maxi;
            int ans = -1;
            while(low<=high)
            {
                int mid = low+(high-low)/2;
                if(isPossible(arr,mid,m,k))
                {
                    ans = mid;
                    high=mid-1;
                }
                else{
                   low=mid+1;
                }
            }
            return ans;
        }
