#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     int rows[4] = {1,-1,0,0};
     int cols[4] =  {0,0,1,-1};
     bool check(int row,int col,int m ,int n)
     {
        return (row>=0 && row<m) && (col>=0 && col<n);
     }
   void bfs(vector<vector<int>>&grid,int m ,int n,int & min,  queue<pair<int,int>> & q)
   {
    
   
   

    while(!q.empty())
    {
        int size = q.size();
         int flag = 0;
        for(int i=0;i<size;i++)
        {
            int first = q.front().first ;
            int second = q.front().second;
            q.pop();
            for(int j=0;j<4;j++)
            {
               int newRow = first + rows[j];
               int newCol = second + cols[j];
               if(check(newRow,newCol,m,n) && grid[newRow][newCol]==1)
               {
                   grid[newRow][newCol]=2;
                   
                   q.push({newRow,newCol});
                   flag = 1;

               }
            }
            

          
        }
         if(flag)
         min++;
    }

   }
    int orangesRotting(vector<vector<int>>& grid) 
    {
         int m  = grid.size();
         int n = grid[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        int min = 0;
         queue<pair<int,int>>q;
        
         for(int i=0;i<m;i++)
         {
            for(int j=0;j<n;j++)
            {
               if(vis[i][j]==0 && grid[i][j]==2)
               {
                   
                      q.push({i,j});

               }
            }
         }

         bfs(grid,m,n,min,q);
          for(int i=0;i<m;i++)
         {
            for(int j=0;j<n;j++)
            {
               if(grid[i][j]==1)
               {  
                  return -1;      
               }
            }
         }
        return min==0?0:min;
    }
};