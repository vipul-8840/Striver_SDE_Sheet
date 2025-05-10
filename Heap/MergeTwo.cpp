#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> & arr,int i,int n)
    {
        int largest = i;
        int left = 2*i+1;
        int right = 2*i+2;
        if(left<n && arr[left]>arr[largest])
        {
            largest = left;
        }
        if(right<n && arr[right]>arr[largest])
        largest = right;
        if(largest!=i)
        {
             swap(arr[largest],arr[i]);
             heapify(arr,largest,n);
        }
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            ans.push_back(b[i]);
        }
        
        for(int i =( ans.size()/2-1);i>=0;i--)
        {
            heapify(ans,i,ans.size());
        }
        return ans;
    }