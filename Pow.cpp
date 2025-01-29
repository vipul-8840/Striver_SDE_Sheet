#include<bits/stdc++.h>
using namespace std;
 double Pow_Of_n(double x,long n)
  {
    if(n==0)
    {
        return 1;
    }
    if(n%2==0)
    {
       return   Pow_Of_n(x*x,n/2);
    }
    else
    {
        return x * Pow_Of_n(x,n-1);
    }
  }

    double myPow(double x, int n) 
    {
       if(n==0)return 1;
        long l=abs((long)n);
       double ans = Pow_Of_n(x,l);
       return n>0 ? ans : 1/ans;
    }