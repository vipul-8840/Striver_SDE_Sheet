#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& arr) {
    // Your code here
    int n = arr.size();
    for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}