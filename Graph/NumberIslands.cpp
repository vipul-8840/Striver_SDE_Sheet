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
   void dfs(vector<vector<int>>& grid,int x,int y,vector<vector<int>>&vis,vector<pair<int,int>>&temp,int baseX,int baseY,int m,int n)
   
   {
       vis[x][y]=1;
       temp.push_back({x-baseX,y-baseY});
       for(int i=0;i<4;i++)
       {
            int nRow = x + rows[i];
            int nCol = y + cols[i];
            if(check(nRow,nCol,m,n) && !vis[nRow][nCol] && grid[nRow][nCol]==1)
            {
                dfs(grid,nRow,nCol,vis,temp,baseX,baseY,m,n);
            }
       }
   }
    int countDistinctIslands(vector<vector<int>>& grid)
    {
        // code here
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        set<vector<pair<int,int>>>s;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(!vis[i][j] && grid[i][j]==1)
                {
                    vector<pair<int,int>>temp;
                    dfs(grid,i,j,vis,temp,i,j,m,n);
                    s.insert(temp);
                    
                }
            }
        }
        return s.size();
        
    }
}