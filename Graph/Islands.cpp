#include <bits/stdc++.h>
using namespace std;

 int rows[4] = {1,-1,0,0};
     int cols[4]= {0,0,1,-1};
     bool check(int row,int col,int m ,int n)
     {
        return (row>=0 && row<m) && (col>=0 && col<n);
     }
   void dfs(vector<vector<char>>& grid,int row,int col,vector<vector<int>> &vis)
   {
         int m = grid.size();
        int n = grid[0].size();
        vis[row][col]=1;
        for(int i=0;i<4;i++)
        {
            int newRow = row + rows[i];
            int newCol= col + cols[i];
            if(check(newRow,newCol,m,n) && vis[newRow][newCol]==0 && grid[newRow][newCol]=='1'  )
            {
                 dfs(grid,newRow,newCol,vis );
            }
        }
   }
    int numIslands(vector<vector<char>>& grid)
     {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0)) ;
        int count =0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(vis[i][j]==0 && grid[i][j]=='1')
                {
                   
                    count++;
                    dfs(grid,i,j,vis);
                }
            }
        }

        return count;
    }