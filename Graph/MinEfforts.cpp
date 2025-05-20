#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     typedef pair<int,pair<int,int>> P;
     int rows[4]={0,0,1,-1};
     int cols[4]={1,-1,0,0};
     int check(int i,int j,int m,int n)
     {
        return (i>=0 && i<m) && (j>=0 && j<n);
     }
    int minimumEffortPath(vector<vector<int>>& heights) 
    {
        int m = heights.size();
        int n = heights[0].size();
        priority_queue<P,vector<P>,greater<P>>pq;
        pq.push({0,{0,0}});
       vector<vector<int>> dist(m,vector<int>(n,INT_MAX));
       dist[0][0]=0;
       while(!pq.empty())
       {
          int diff = pq.top().first;
          int row = pq.top().second.first;
          int col = pq.top().second.second;
          pq.pop();
          if(row==m-1 && col==n-1)
          return diff;
          for(int i=0;i<4;i++)
          {
             int nRow = row + rows[i];
             int nCol = col + cols[i];
             

             if(check(nRow,nCol,m,n) )
             {
                int newEfforts = max(abs(heights[row][col]-heights[nRow][nCol]) ,diff);
                if(newEfforts<dist[nRow][nCol])
                {
                    
                    dist[nRow][nCol]=newEfforts;
                    pq.push({newEfforts,{nRow,nCol}});

                    
                }
             }

          }

       }
       return -1;
    }
};