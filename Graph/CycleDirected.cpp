#include <bits/stdc++.h>
using namespace std;

 bool dfs(vector<int>adj[],vector<int>&vis,int node,vector<int>& path)
    {
        vis[node]=1;
        path[node]=1;
        
        for(int i=0;i<adj[node].size();i++)
        {
            int adjNode = adj[node][i];
            if(!vis[adjNode])
            {
                if(dfs(adj,vis,adjNode,path))
                return true;
            }
            else{
                if(path[adjNode])
                return true;
            }
        }
        path[node]=0;
        return false;
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<int>adj[V];
        vector<int>path(V);
        vector<int>vis(V);
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(dfs(adj,vis,i,path))
                return true;
            }
        }
        return false;
    }