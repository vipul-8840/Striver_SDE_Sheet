#include<bits/stdc++.h>
using namespace std ;
int findFloor(vector<int>& arr, int x) {
    // Your code here
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