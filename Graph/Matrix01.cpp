#include <bits/stdc++.h>
using namespace std;

class Solution {
public: 
int rows[4] = {1,-1,0,0};
     int cols[4]= {0,0,1,-1};
     bool check(int row,int col,int m ,int n)
     {
        return (row>=0 && row<m) && (col>=0 && col<n);
     }
    int bfs(vector<vector<int>>& mat,int x,int y,int m,int n)
    {
           queue<pair<pair<int,int>,int>> q;
           vector<vector<int>> vis (m,vector<int>(n,0));
           q.push({{x,y},0});
           vis[x][y]=1;
           while(!q.empty())
           {
              int x = q.front().first.first;
              int y =q.front().first.second; 
              int min = q.front().second;
              q.pop();
            for(int i=0;i<4;i++)
            {
                int newRow = x + rows[i];
                int newCol = y + cols[i];


                if(check(newRow,newCol,m,n) && !vis[newRow][newCol] && mat[newRow][newCol]==0)
                {
                      return min + 1;
                }

                else if (check(newRow,newCol,m,n) && !vis[newRow][newCol] && mat[newRow][newCol]!=0)
                {
                     vis[newRow][newCol]=1;
                     q.push({{newRow,newCol},min+1});
                }
                else {
                    continue;
                }
            }
               
           }
           return -1;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat)
     {
        int m = mat.size();
        int n = mat[0].size();
         vector<vector<int>> ans(m,vector<int>(n,0));

         for(int i=0;i<m;i++)
         {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]!=0)
                {
                    ans[i][j]=bfs(mat,i,j,m,n);
                }
                else{
                    ans[i][j]=0;
                }
            }
         }
         return ans;

        
     }
};