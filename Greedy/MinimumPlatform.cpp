#include <bits/stdc++.h>
using namespace std;

int findPlatform(vector<int>& arr, vector<int>& dep) 
    {
        // Your code here
        
       sort(arr.begin(),arr.end());
       
       sort(dep.begin(),dep.end());
       int count = 0;
       int maxi= 0;
       
       int i=0,j=0;
       while(i<arr.size() && j<arr.size())
       {
           if(arr[i]<=dep[j])
           {
               count++;
               i++;
           }
           else
           {
               count--;
               j++;
           }
           maxi = max(maxi,count);
       }
       return maxi;
    }
