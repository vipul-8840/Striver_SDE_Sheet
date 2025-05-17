#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int rows[4] = {0,0,1,-1};
    int cols[4]={1,-1,0,0};
    bool check(int i,int j,int m ,int n)
    {
        return (i>=0 && i<m)&& (j>=0 && j<n);
    }
    void dfs(vector<vector<int>>& board,int x,int y,vector<vector<int>>&vis,int m,int n)
    {
          vis[x][y]=1;
          for(int i=0;i<4;i++)
          {
            int nRow = x + rows[i];
            int nCol= y + cols[i];

            if(check(nRow,nCol,m,n) && !vis[nRow][nCol] && board[nRow][nCol]==1)
            {
                vis[nRow][nCol]=1;
                dfs(board,nRow,nCol,vis,m,n);
            }
          }
    }
    int numEnclaves(vector<vector<int>>& board)
     {
          int m = board.size();
       int n =  board[0].size();
       vector<vector<int>>vis(m,vector<int>(n,0));

       for(int j=0;j<n;j++)
       {
          if(!vis[0][j] && board[0][j]==1)
          {
            dfs(board,0,j,vis,m,n);
          }
          if(!vis[m-1][j] && board[m-1][j]==1)
          {
            dfs(board,m-1,j,vis,m,n);
          }
       } 
      for(int i=0;i<m;i++)
       {
          if(!vis[i][0] && board[i][0]==1)
          {
            dfs(board,i,0,vis,m,n);
          }
          if(!vis[i][n-1] && board[i][n-1]==1)
          {
            dfs(board,i,n-1,vis,m,n);
          }
       } 
       int count =0;
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
            if(!vis[i][j] && board[i][j]==1)
            {
               count++;
            }
        }
      }
        
     return count;
    }
};