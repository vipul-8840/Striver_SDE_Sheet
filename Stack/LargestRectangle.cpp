#include <bits/stdc++.h>
using namespace std;

vector<int> findNSL(vector<int>& arr)
    {
        int n = arr.size();
        vector<int>ans(n);
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && arr[i]<=arr[st.top()])
            {
                st.pop();
            }
            if(st.empty())
            {
                ans[i]=-1;
            }
            else{
                ans[i]=st.top();
            }
            st.push(i);
        }
        return ans;
    }
    vector<int> findNSR(vector<int>& arr)
    {
        int n = arr.size();
        vector<int>ans(n);
        stack<int>st;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && arr[i]<=arr[st.top()])
            {
                st.pop();
            }
            if(st.empty())
            {
                ans[i]=n;
            }
            else{
                ans[i]=st.top();
            }
            st.push(i);
        }
        return ans;
    }
   void  print(vector<int>&  arr)
    {
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }
    int largestRectangleArea(vector<int>& heights) 
    {
        vector<int> NSL = findNSL(heights);
        vector<int>NSR = findNSR(heights);
        int res = 0;
        print(NSL);
        print(NSR);
        for(int i=0;i<heights.size();i++)
        {
           res = max(res , (NSR[i]-NSL[i]-1)* heights[i]);
        }
        return res;
    }
