#include <bits/stdc++.h>
using namespace std;

 void rotate(vector<vector<int>>& mat) 
    {
        int n = mat.size();

        for(int i=0;i<n/2;i++)
        {
           for(int j=0;j<n;j++)
           {
            swap(mat[i][j],mat[n-1-i][j]);
           }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                swap(mat[i][j],mat[j][i]);
            }
        }
  
    }