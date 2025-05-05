#include <bits/stdc++.h>
using namespace std;

int celebrity(vector<vector<int> >& arr) 
    {
        // code here
        int n = arr.size();
        if(n==1)
        {
            return 0;
        }
        int col = -1;
        for(int i=0;i<n;i++)
        {
            int flag = 0;
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if(arr[i][j]==1)
                     {
                         flag = 1;
                         break;
                     }
                }
            }
            if(flag==0)
            {
                col = i;
            }
        }
        int cel = 0;
        for(int j=0;j<n;j++)
        {
            if(col!=j)
            {
                if(arr[j][col]==0)
                {
                  cel =1;
                  break;
                }
            }
        }
        return cel==0?col : -1;
    }
