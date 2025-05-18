#include <bits/stdc++.h>
using namespace std;

 bool dfs(vector<vector<int>>& graph,int node,vector<int> &vis,vector<int>&path)
  {
    vis[node]=1;
    path[node]=1;
    for(int i=0;i<graph[node].size();i++)
    {
        int adjNode = graph[node][i];
        if(!vis[adjNode])
        {
           if(dfs(graph,adjNode,vis,path))
           return true;
        }
        else
        {
            if(path[adjNode])
            return true;

        }
    }
    path[node]=0;
    return false;
  }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) 
    {
        int n =  graph.size();
        vector<int> vis(n);
        vector<int>path(n);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
              path[i]=dfs(graph,i,vis,path);
            }
        }
        vector<int>ans;

        for(int i=0;i<n;i++)
        {
           if(!path[i])
           {
              ans.push_back(i);
           }
        }
        return ans;
    }