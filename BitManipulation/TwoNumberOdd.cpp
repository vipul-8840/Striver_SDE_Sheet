#include <bits/stdc++.h>
using namespace std;

vector<long long int> twoOddNum(long long int arr[], long long int N)  
{
    // code here
  
    long long xorr = 0;
    for(long long i=0;i<N;i++)
    {
        xorr= xorr ^ arr[i];
    }
  
   long long bits = xorr & -xorr;
  
    
    
    long long b1 = 0;
    long long b2 = 0;
    for(long long i=0;i<N;i++)
    {
      if(arr[i] & bits)
        {
            b1 = b1^arr[i];
        }
        else
        {
            b2 = b2^arr[i];
        }
    }
      if(b1<b2)
      return {b2,b1};
    
        
        return {b1,b2};
  
}