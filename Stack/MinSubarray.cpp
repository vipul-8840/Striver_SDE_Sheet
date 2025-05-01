#include <bits/stdc++.h>
using namespace std;

int sumSubarrayMins(vector<int>& arr) {
        
    int sum = 0;
    int n = arr.size();
    for(int i=0;i<n;i++)
    {
        sum=(sum + arr[i])%1000000007;
        
        int mini = arr[i];
        for(int j=i+1;j<n;j++)
        {
           mini = min(mini,arr[j]);
           sum=( sum + mini)%1000000007;
        }
    }
    return sum;
}