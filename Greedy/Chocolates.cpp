#include <bits/stdc++.h>
using namespace std;

 int findMinDiff(vector<int>& a, int m) {
        // code here
        sort (a.begin(),a.end());
        int mini =  a[m-1]-a[0];
        int n = a.size();
        
        for(int i =1 ;i<=(n-m);i++)
        {
            mini = min(mini,a[i+m-1]-a[i]);
        }
        return mini;
    }
