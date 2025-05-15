#include <bits/stdc++.h>
using namespace std;

 void dfs(vector<vector<int>>& adj,int node , vector<int>&vis,vector<int>& ans)
    {
        
        ans.push_back(node);
        vis[node]=1;
        for(int i=0;i<adj[node].size();i++)
        {
            int neighbour = adj[node][i];
            if(!vis[neighbour])
            {
                dfs(adj,neighbour,vis,ans);
            }
        }
        return ;
    }
    vector<int> dfs(vector<vector<int>>& adj) 
    {
        // Code here
        int n = adj.size();
        vector<int>vis(n,0);
        vector<int>ans;
         dfs(adj,0,vis,ans);
         return ans;
    }