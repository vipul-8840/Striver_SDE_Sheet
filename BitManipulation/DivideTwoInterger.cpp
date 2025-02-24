#include<bits/stdc++.h>
using namespace std ;
int divide(int dividend, int divisor) 
    {
        // Handle overflow case: INT_MIN / -1
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;

        int flag = (dividend < 0) ^ (divisor < 0) ? -1 : 1;
        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);
        long long ans = 0;

        while(n>=d)
        {
            int count = 0;
            while(n>=(d<<count))
            {
                count++;
            }
             count--;  
            n -= (d << count);
            ans+=(1<< count);

            
        }
     return flag * ans ;
      
    }
