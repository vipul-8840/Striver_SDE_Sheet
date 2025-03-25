#include <bits/stdc++.h>
using namespace std;

// Brute force approach problem 
double findSmallestMaxDist(vector<int> &arr, int k) 
{
    // Code here
    int n = arr.size();
    vector<int>number(n-1,0);

    
    for(int i=1;i<=k;i++)
    {
           double maxiDist = -1;
           int index = -1;
          for(int j=0;j<n-1;j++)
          {
              double diff = (arr[j+1]-arr[j]);
              double dist = diff/(double)(number[j]+1);
              if(dist>maxiDist)
              {
                  maxiDist=dist;
                  index=j;
              }
          }
          
          number[index]++;
    }
    
       double maxiDist = -1;
   
    for(int i=0;i<n-1;i++)
    {
        double diff = (arr[i+1]-arr[i]);
        double dist = diff/(double)(number[i]+1);
        maxiDist = max(maxiDist,dist);
    }
   return maxiDist ;
}
