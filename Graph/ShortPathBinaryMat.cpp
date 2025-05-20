#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rows[8]={0,0,-1,1,1,1,-1,-1};
    int cols[8]={-1,1,0,0,-1,1,-1,1};
    int check(int i,int j,int n)
    {
        return ((i>=0 && i<n) && (j>=0 && j<n));
    }
    int shortestPathBinaryMatrix(vector<vector<int>>&grid)
    {


       int n = grid.size();

       vector<vector<int>>vis(n,vector<int>(n,0));
       queue<pair<pair<int,int>,int>>q;
        if (grid[0][0] == 1 || grid[n-1][n-1] == 1)
            return -1;
       q.push({{0,0},1});
       vis[0][0]=1;
       
       while(!q.empty())
       {
           int row = q.front().first.first;
           int col = q.front().first.second;
           int step = q.front().second;
           q.pop();
            
           if(row==n-1 && col==n-1)
           return step;

           for(int i=0;i<8;i++)
           {
             int nRow = row + rows[i];
             int nCol = col + cols[i];
             if(check(nRow,nCol,n)&& !vis[nRow][nCol] && grid[nRow][nCol]==0 ) 
             {
                 vis[nRow][nCol]=1;
                 q.push({{nRow,nCol},step+1});
             }
           }
       }

        return -1;
    }
};