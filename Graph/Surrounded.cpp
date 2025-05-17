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
    void dfs(vector<vector<char>>& board,int x,int y,vector<vector<int>>&vis,int m,int n)
    {
          vis[x][y]=1;
          for(int i=0;i<4;i++)
          {
            int nRow = x + rows[i];
            int nCol= y + cols[i];

            if(check(nRow,nCol,m,n) && !vis[nRow][nCol] && board[nRow][nCol]=='O')
            {
                vis[nRow][nCol]=1;
                dfs(board,nRow,nCol,vis,m,n);
            }
          }
    }
    void solve(vector<vector<char>>& board) 
    {

       int m = board.size();
       int n = board[0].size();
       vector<vector<int>>vis(m,vector<int>(n,0));

       for(int j=0;j<n;j++)
       {
          if(!vis[0][j] && board[0][j]=='O')
          {
            dfs(board,0,j,vis,m,n);
          }
          if(!vis[m-1][j] && board[m-1][j]=='O')
          {
            dfs(board,m-1,j,vis,m,n);
          }
       } 
      for(int i=0;i<m;i++)
       {
          if(!vis[i][0] && board[i][0]=='O')
          {
            dfs(board,i,0,vis,m,n);
          }
          if(!vis[i][n-1] && board[i][n-1]=='O')
          {
            dfs(board,i,n-1,vis,m,n);
          }
       } 

      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
            if(!vis[i][j] && board[i][j]=='O')
            {
                board[i][j]='X';
            }
        }
      }
        
    }
};