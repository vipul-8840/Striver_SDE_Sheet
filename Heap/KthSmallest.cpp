#include <bits/stdc++.h>
using namespace std;

// int kthSmallest(vector<int> &arr, int k)
//     {
//         // code here
//         sort(arr.begin(),arr.end());
//         return arr[k-1];
        
//     }

     int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq(arr.begin(),arr.end());
        
        while(k>1 && !pq.empty())
        {
           pq.pop();
           k--;
            
        }
        
        return pq.top();
        
        