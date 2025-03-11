#include<bits/stdc++.h>
using namespace std ;

int nthRoot(int n, int m) {
    // Code here.
    int ans = -1;
    
    for(int i = 1;i<=m;i++)
    {
          int power = pow(i,n);
          if(power==m)
        {
             ans = i ;
              break;
        }
          if(power>m)
          break;
    }
    return ans;
}