#include<bits/stdc++.h>
using namespace std ;

int nthRoot(int n, int m) {
    // Code here. for linear search approach
//     int ans = -1;
    
//     for(int i = 1;i<=m;i++)
//     {
//           int power = pow(i,n);
//           if(power==m)
//         {
//              ans = i ;
//               break;
//         }
//           if(power>m)
//           break;
//     }
//     return ans;
// method -2 with the help of binary search
int start = 1;
int end = m;
while(start <=end)
{
    int mid = start + (end-start)/2;
    if(pow(mid,n)==m)
    return mid ;
    else if (pow(mid,n)<m)
    start = mid+1;
    else {
        end = mid-1;
    }
}
  return -1;
}
