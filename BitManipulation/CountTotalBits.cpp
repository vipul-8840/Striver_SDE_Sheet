
#include<bits/stdc++.h>
using namespace std;

int larpow(int n)
{
    int x =0;
    while((1<<x)<=n)
    {
        x++;
    }
    
    return x-1;
}


int countSetBits(int n)
{
    // Your logic here
    if(n==0)
    return 0;
   int x = larpow(n);
   int y = x * (1<<(x-1));
   int z = n - (1<<x);
   return y + z + 1 + countSetBits(z);
}