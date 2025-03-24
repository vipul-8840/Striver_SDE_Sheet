#include<bits/stdc++.h>
using namespace std;

void quickSort(vector<int>& arr, int low, int high) {
    // code here
    if(low<high)
    {
        int pivot =  partition(arr,low,high);
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    }
}


int partition(vector<int>& arr, int low, int high) {
    
    // code here
    
    int el = arr[low];
    int i = low ;
    int j = high;
    while(i<j)
    {
        while(arr[i]<=el && i<=high-1)
        {
            i++;
        }
        while(arr[j]>el && j>=low+1)
        j--;
        
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    
    swap(arr[j],arr[low]);
    return j;
   
}
