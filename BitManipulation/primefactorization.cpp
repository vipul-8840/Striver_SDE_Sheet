#include<bits/stdc++.h>
using namespace std ;

void sieve() {}

vector<int> findPrimeFactors(int N) {

    // Write your code here
    vector<int> ans;
    for(int i=2;i*i<=N;i++)
    {
        if(N%i==0)
        {
         
            while(N%i==0)
            {
                ans.push_back(i);
                N = N/i;
                
            }
        }
    }
    if(N!=1)
    ans.push_back(N);
    
    return ans;
}