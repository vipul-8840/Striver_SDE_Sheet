#include <bits/stdc++.h>
using namespace std;

// m-1 linear Search method 
int findKthPositive(vector<int>& arr, int k)
     {
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<=k)
            k++;
            else{
                return k;
            }
        }
        return k;
    }
