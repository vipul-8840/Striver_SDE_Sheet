#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007LL;
    long long powerNum(long long b, long long n)
     {
            if (n == 0) return 1; 

            long long half = powerNum(b, n / 2) % MOD;
            long long halfSquared = (half * half) % MOD;

            if (n % 2 == 0) {
                return halfSquared;
            } else {
                return (b * halfSquared) % MOD;
            }
    }

    int countGoodNumbers(long long n) 
    {
      long long res1 = (n+1)/2;
      long long res2 = (n/2);
      return (powerNum(5,res1) * powerNum(4,res2))%1000000007;
      
    }

