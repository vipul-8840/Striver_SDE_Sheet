#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int mat[MAX][MAX], int n, int k) 
{
    // Your code here
  using p =  pair<int,pair<int,int>> ;
    
    priority_queue<p,vector<p>,greater<p>> pq;
    for(int i=0;i<n;i++)
    {
         pq.push({mat[i][0],{i,0}});
    }
    
   while(k-1>0)
   {
       auto  s = pq.top();
       pq.pop();
       int i = s.second.first;
       int j = s.second.second;
       if((j+1) < n)
       {
           pq.push({mat[i][j+1],{i,j+1}});
       }
       k--;
   }
   return pq.top().first;

}
