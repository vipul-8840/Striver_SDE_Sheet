#include <bits/stdc++.h>
using namespace std;

long long Maxheap(long long A[],long long k,long long N)
    {
        priority_queue< long long > pq;
       for(long long i=0;i<k;i++)
       {
           pq.push(A[i]);
       }
       
       for(long long i=k;i<N;i++)
       {
           if(pq.top()>A[i])
           {
               pq.pop();
               pq.push(A[i]);
           }
       }
        
        long long sum = 0;
        while(!pq.empty())
        {
            sum+=pq.top();
            pq.pop();
        }
        
        return sum;
    }
    long long sumBetweenTwoKth(long long A[], long long N, long long K1, long long K2)
    {
        // Your code goes here
        
        long long res1 = Maxheap(A,K1,N);
        long long res2 = Maxheap(A,K2-1,N);
        return (res2-res1);
        
    }
