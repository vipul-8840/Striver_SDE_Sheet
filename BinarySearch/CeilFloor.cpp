#include <bits/stdc++.h>
using namespace std;

int findFloor(vector<int>& arr, int x) {

    int n = arr.size();
    int ans = -1;
    int start = 0,end = n-1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid]<=x)
        {
            ans = mid ;
            start = mid +1;
            
        }
        else
        end = mid-1;
    }
    return ans ;
}
int findCeil(vector<int>& arr, int x) {
    // Your code here
    int n = arr.size();
    int ans = -1;
    int start = 0,end = n-1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid]<x)
        {
        
            start = mid +1;
            
        }
        else
      {  
          ans = mid ;
          end = mid-1;
          
      }
    }
    return ans ;
}
vector<int> getFloorAndCeil(int x, vector<int> &arr)
{
    // code here
    sort(arr.begin(),arr.end());
    int ans = findFloor(arr,x);
     vector<int>res;
     ans==-1 ? res.push_back(-1) : res.push_back(arr[ans]);
     
     ans = findCeil(arr,x);
     ans==-1 ? res.push_back(-1) : res.push_back(arr[ans]);
     return res;
     
}