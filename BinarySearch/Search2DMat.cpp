#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int m = mat.size();
    int n = mat[0].size();

    for(int i=0;i<m;i++)
    {
       if(mat[i][0]<= target && target<= mat[i][n-1])
       {
           int start = 0;
           int end = n-1;
           while(start<=end)
           {
               int mid = start + (end-start)/2;
               if(mat[i][mid]==target)
               return true;
               else if (mat[i][mid]<target)
               start = mid +1;
               else
               end= mid-1;
           }
           // break;
       }
    }
    return false;
}
