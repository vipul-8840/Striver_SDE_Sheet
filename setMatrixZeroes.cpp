#include<bits/stdc++.h>
using namespace std;


void setZeroes(vector<vector<int>>& mat) 
{
    int row = mat.size();
    int col = mat[0].size();
    vector<int>rows;
    vector<int>cols;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
                if(mat[i][j]==0)
                {
                    rows.push_back(i);
                    cols.push_back(j);
                }
        }
    }

    int index =0;
    

    for(int i=0;i<rows.size();i++)
    {
        for(int j=0;j<col;j++)
        {
            mat[rows[index]][j]=0;
        }
        index++;
    }
    index=0;
        
    for(int i=0;i<cols.size();i++)
    {
        for(int j=0;j<row;j++)
        {
            mat[j][cols[index]]=0;
        }
        index++;
    }
    
}
