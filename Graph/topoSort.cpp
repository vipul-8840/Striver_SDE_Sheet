#include <bits/stdc++.h>
using namespace std;

 void dfs (vector<int>adj[],int node,int vis[],stack<int>&st)
   {
         vis[node]=1;
         for(int i=0;i<adj[node].size();i++)
         {
             int adjNode = adj[node][i];
             if(!vis[adjNode])
             {
                 dfs(adj,adjNode,vis,st);
             }
         }
         st.push(node);
         
   }
    vector<int> topoSort(int V, vector<vector<int>>& edges) 
    {
        // code here
        vector<int>adj[V];
        int vis[V]={0};
        stack<int>st;
        
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                dfs(adj,i,vis,st);
            }
        }
        vector<int>ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
