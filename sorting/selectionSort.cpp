#include<bits/stdc++.h>
using namespace std ;
void selectionSort(vector<int> &arr) 
    {
        // code here
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            int minIndex = i;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<arr[minIndex])
                {
                    minIndex = j;
                }
            }
            swap(arr[i],arr[minIndex]);
            
        }
    }