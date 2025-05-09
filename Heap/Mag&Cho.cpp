#include <bits/stdc++.h>
using namespace std;

int Solution(int A, vector<int> &B)
 {
    priority_queue<int> pq;
   long long sum =0;
    for(int i =0;i<B.size();i++)
    {
        pq.push(B[i]);
        
    }
    
    while(A && (!pq.empty()))
    {
        
        sum+=pq.top();
       
         pq.push(pq.top()/2);
         A--;
        pq.pop();
    }
    return (sum)%1000000007;
}