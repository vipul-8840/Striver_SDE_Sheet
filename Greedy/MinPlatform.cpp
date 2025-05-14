#include <bits/stdc++.h>
using namespace std;

 int findPlatform(vector<int>& arr, vector<int>& dep) {
        
          sort(arr.begin(),arr.end());
          sort(dep.begin(),dep.end());
          int i=0;
          int j=0;
          int n = arr.size();
          int res = 0;
          int count =0;
          while(i<n && j<n)
          {
              if(arr[i]<=dep[j])
              {
                  i++;
                  count++;
              }
              else{
                  count--;
                  j++;
              }
              res = max(res,count);
          }
          return res;
    }