
#include<bits/stdc++.h>
using namepspace std;
class Solution {
    public:
    int rows[4] = {0,0,1,-1};
    int cols[4] = {1,-1,0,0};
       bool find(vector<vector<char>>& board,int i,int j,int idx,string word,int m ,int n)
       {
        if(idx==word.size())
        return true;
        if(i<0 || i>=m || j<0 || j>=n || board[i][j]!=word[idx]|| board[i][j]=='#')
        {
            return false;
        }
         char ch =  board[i][j];
         board[i][j]='#';
         for(int k =0;k<4;k++)
         {
            int row = i + rows[k];
            int col = j+ cols[k];
           if( (find(board,row,col,idx+1,word,m,n)))
            return true;
         }
         board[i][j]=ch;
         return false;
       }
        bool exist(vector<vector<char>>& board, string word) {
            int m = board.size();
            int n = board[0].size();
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(board[i][j]==word[0] && find(board,i,j,0,word,m,n))
                    {
                          return true;
                    }
                }
            }
            return false ;
        }
    };