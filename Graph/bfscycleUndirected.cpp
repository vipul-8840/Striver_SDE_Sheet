#include <bits/stdc++.h>
using namespace std;

 bool bfs( vector<int>adj[],vector<int>&vis,int node)
  {
      
      queue<pair<int,int>>q;
      q.push({node,-1});
      
      vis[node]=1;
      
      while(!q.empty())
      {
          node = q.front().first;
          int parent = q.front().second;
          q.pop();
         for(int i=0;i<adj[node].size();i++)
         {
             int neigh = adj[node][i];
             if(!vis[neigh])
             {
                 vis[neigh]=1;
                 q.push({neigh,node});
             }
             else if(parent!=neigh)
             {
                 return true;
             }
             else
             {
                 continue;
             }
         }
         
      }
      return false;
      
  }
  
  
    bool isCycle(int V, vector<vector<int>>& edges)
    {
        // Code 
        
        
        vector<int>adj[V];
        vector<int>vis(V);
        
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            
        }
        for(int i=0;i<V;i++)
        {
            if(!vis[i] && bfs(adj,vis,i) )
            {
               return true;
            }
        }
        return false;
    }