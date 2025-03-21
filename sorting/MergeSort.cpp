#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr,int start,int mid ,int end){
    vector<int>temp(end-start+1);
    int index=0;
    int first = start;
    int second = mid +1;
    while(first<=mid && second<=end )
    {
        if(arr[first]<=arr[second])
        {
            temp[index]=arr[first];
            first++;
            index++;
        }
        else{
            temp[index]=arr[second];
            second++;
            index++;
        }
    }
    
    while(first<=mid)
    {
        temp[index]=arr[first];
        index++;
        first++;
    }
     while(second<=end)
    {
        temp[index]=arr[second];
        index++;
       second++;
    }
    index = 0;
    for(int i=start;i<=end;i++)
    {
        arr[i]=temp[index];
        index++;
      //   start++;
    }
    
}
  void mergeSort(vector<int>& arr, int l, int r) {
      // code here
     
        if(l>=r)
        {
            return ;
        }
        
       int mid = l+ (r-l)/2;
       mergeSort(arr,l,mid);
       mergeSort(arr,mid+1,r);
       merge(arr,l,mid,r);
      
  }