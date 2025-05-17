#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public: 
// int rows[4] = {1,-1,0,0};
//      int cols[4]= {0,0,1,-1};
//      bool check(int row,int col,int m ,int n)
//      {
//         return (row>=0 && row<m) && (col>=0 && col<n);
//      }
//     int bfs(vector<vector<int>>& mat,int x,int y,int m,int n)
//     {
//            queue<pair<pair<int,int>,int>> q;
//            vector<vector<int>> vis (m,vector<int>(n,0));
//            q.push({{x,y},0});
//            vis[x][y]=1;
//            while(!q.empty())
//            {
//               int x = q.front().first.first;
//               int y =q.front().first.second; 
//               int min = q.front().second;
//               q.pop();
//             for(int i=0;i<4;i++)
//             {
//                 int newRow = x + rows[i];
//                 int newCol = y + cols[i];


//                 if(check(newRow,newCol,m,n) && !vis[newRow][newCol] && mat[newRow][newCol]==0)
//                 {
//                       return min + 1;
//                 }

//                 else if (check(newRow,newCol,m,n) && !vis[newRow][newCol] && mat[newRow][newCol]!=0)
//                 {
//                      vis[newRow][newCol]=1;
//                      q.push({{newRow,newCol},min+1});
//                 }
//                 else {
//                     continue;
//                 }
//             }
               
//            }
//            return -1;
//     }
//     vector<vector<int>> updateMatrix(vector<vector<int>>& mat)
//      {
//         int m = mat.size();
//         int n = mat[0].size();
//          vector<vector<int>> ans(m,vector<int>(n,0));

//          for(int i=0;i<m;i++)
//          {
//             for(int j=0;j<n;j++)
//             {
//                 if(mat[i][j]!=0)
//                 {
//                     ans[i][j]=bfs(mat,i,j,m,n);
//                 }
//                 else{
//                     ans[i][j]=0;
//                 }
//             }
//          }
//          return ans;

        
//      }
// };

class Solution {
public:
    int rows[4] = {0,0,1,-1};
    int cols[4]={1,-1,0,0};
    bool check(int i,int j,int m ,int n)
    {
        return (i>=0 && i<m)&& (j>=0 && j<n);
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) 
    {
        int m = mat.size();
        int n = mat[0].size();
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>> dist(m,vector<int>(n,0)); 
        vector<vector<int>> vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==0)
                {
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }

        while(!q.empty())
        {
            int x = q.front().first.first;
            int y = q.front().first.second;
            int step = q.front().second;
              dist[x][y]=step;
              q.pop();
            for(int i=0;i<4;i++)
            {
                int nRow = x + rows[i];
                int nCol = y + cols[i];
                  if(check(nRow,nCol,m,n) && vis[nRow][nCol]==0)
                  {
                    vis[nRow][nCol]=1;
                    q.push({{nRow,nCol},step+1});
                    
                  }
            }
        } 
        return dist;
    }
};