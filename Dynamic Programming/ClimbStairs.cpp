#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n) {
    int last = 1 ;
    int prev = 1;
    for(int i=1;i<n;i++)
    {
        int curr = last + prev;
        prev = last;
      last= curr;
    }
    return last;
    
}
