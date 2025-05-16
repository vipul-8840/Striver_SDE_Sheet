#include <bits/stdc++.h>
using namespace std;

int main()
class Solution {
public:
      
 int rows[4] = {1,-1,0,0};
     int cols[4]= {0,0,1,-1};
     bool check(int row,int col,int m ,int n)
     {
        return (row>=0 && row<m) && (col>=0 && col<n);
     }
    void dfs(vector<vector<int>>& image, int sr, int sc, int color,int & h,vector<vector<int>>&vis)
    {
          int m = image.size();
        int n =  image[0].size();
        vis[sr][sc]=1;
        image[sr][sc]=color;
        for(int i=0;i<4;i++)
        {
             int newRow = sr + rows[i];
             int newCol= sc + cols[i];
            if(check(newRow,newCol,m,n) && vis[newRow][newCol]==0 && image[newRow][newCol]==h)
            {
                
                  dfs(image,newRow,newCol,color,h,vis);
            }
        }
         
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color)
    {
        int m = image.size();
        int n =  image[0].size();
       int h =  image[sr][sc];
       vector<vector<int>>vis(m,vector<int>(n,0));
       dfs(image,sr,sc,color,h,vis);
       return image;
        
    }
};