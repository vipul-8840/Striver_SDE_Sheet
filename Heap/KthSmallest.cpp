#include <bits/stdc++.h>
using namespace std;

int kthSmallest(vector<int> &arr, int k)
    {
        // code here
        sort(arr.begin(),arr.end());
        return arr[k-1];
        
    }