#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>&arr)
{
    stack<int>st;
    int n = arr.size();
    int res = 0;
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && arr[i]<arr[st.top()])
        {
            int ind = st.top();
            st.pop();
            int psl = st.empty() ?-1 : st.top();
            res = max(res,(i-1-psl)*arr[ind]);
        }
        st.push(i);

    }
    while(!st.empty())
    {
            int ind = st.top();
            st.pop();
            int psl = st.empty() ?-1 : st.top();
            res = max(res,(n-1-psl)*arr[ind]);
            
    }
    return res ;
}
int maximalRectangle(vector<vector<char>>& matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int>arr(n,0);
    int res = 0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]=='0')
            {
                  arr[j]=0;
            }
            else{
                arr[j]++;
            }
        }
      int  area =  maxArea(arr);
       res = max(res,area);
    }
    return res;
}
