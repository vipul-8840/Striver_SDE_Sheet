#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> getNSL(vector<int>& arr )
        {
             int n=arr.size(); 
             vector<int>ans(n);
             stack<int>st;
            
             for(int i=0;i<n;i++)
             {
                 while(!st.empty() && arr[st.top()]>=arr[i])
                 st.pop();
    
                 if(st.empty())
                 {
                    ans[i]= -1;
                 }
                 else
                 {
                    ans[i]=st.top();
                 }
                 st.push(i);
             }
             return ans;
        }
        vector<int> getNSR(vector<int>&arr)
        {
             int n=arr.size(); 
             vector<int>ans(n);
             stack<int>st;
             
             for(int i=n-1;i>=0;i--)
             {
                while(!st.empty() && arr[st.top()]>arr[i])
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
        vector<int> getNGL(vector<int>& arr)
        {
             int n=arr.size(); 
             vector<int>ans(n);
             stack<int>st;
             for(int i=0;i<n;i++)
             {
                while(!st.empty() && arr[st.top()]<=arr[i])
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
    
       vector<int> getNGR(vector<int>&arr)
       {
            int n=arr.size(); 
             vector<int>ans(n);
             stack<int>st;
             for(int i=n-1;i>=0;i--)
             {
                while(!st.empty() && arr[st.top()]<arr[i])
                st.pop();
                if(st.empty())
                ans[i]=n;
                else{
                    ans[i]= st.top();
                }
                st.push(i);
             }
           return ans;
       }
        void print(vector<int> & temp)
            {
                int n = temp.size();
                for(int i=0;i<n;i++)
                {
                    cout<<temp[i]<<" ";
    
                }
                cout<<endl;
            }
        
       long long subArrayRanges(vector<int>& arr) {
        vector<int> NSL = getNSL(arr);
        vector<int> NSR = getNSR(arr);
        vector<int> NGL = getNGL(arr);
        vector<int> NGR = getNGR(arr);
    
        int n = arr.size();
        long long minsum = 0, maxsum = 0;
        long long M = 1e9 + 7;
    
        for(int i = 0; i < n; ++i) {
        long long le = i - NSL[i];
        long long re = NSR[i] - i;
        long long total = le * re;
        minsum += total * 1LL * arr[i];
    }
    
    for(int i = 0; i < n; ++i) {
        long long le = i - NGL[i];
        long long re = NGR[i] - i;
        long long total = le * re;
        maxsum += total * 1LL * arr[i];
    }
    
    return maxsum - minsum;
    }
    
    };
