#include <bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int>> &arr)
{
    // code here
    int index = -1;
    int ans = 0;
    for(int i =0;i<arr.size();i++)
    {
        int first = 0;
        int flag = 0;
        int m = arr[i].size();
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==1)
            {
                first = j;
                flag = 1;
                break;
            }
            
        }
        
        if(m-first>ans && flag)
        {
            ans = m-first;
            index = i;
        }
        
        
    }
    
    return index ;
}