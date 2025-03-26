#include <bits/stdc++.h>
using namespace std;

int sumOfSeries(int n) {
    // code here
    if(n==1)
    return 1;
    
    return pow(n,3) + sumOfSeries(n-1);
}
