#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to sort an array using Heap Sort
  void Heapfiy(vector<int>& arr ,int i, int n )
  {
      while(i!=n)
      {
          int largest = i;
          int left = 2*i+1;
          int right = 2*i+2;
          if(left<n && arr[left]>arr[largest])
          {
              largest = left;
          
              
          }
          if(right<n && arr[right]>arr[largest])
          {
              largest = right;
          }
          if(largest!=i)
          {
              swap(arr[largest],arr[i]);
              i=largest ;
          }
          else{
              break;
          }
      }
  }
    
    void BuildHeap(vector<int>& arr , int n )
    {
        for(int i = (n/2 -1);i>=0;i--)
        {
            Heapfiy(arr,i,n);
        }
    }
    
    void HeapSort(vector<int>& arr , int n)
    {
        for(int i=n-1;i>0;i--)
        {
            swap(arr[i],arr[0]);
           Heapfiy(arr,0,i);
        }
    }
    void heapSort(vector<int>& arr)
    {
        // code here
        int n = arr.size();
        BuildHeap(arr,n);
        HeapSort(arr,n);
        
    }
};
