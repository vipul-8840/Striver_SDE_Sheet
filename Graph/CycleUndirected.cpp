#include <bits/stdc++.h>
using namespace std;

 bool check(vector<int> adj[],int node,int parent,vector<int>&vis)
    {
        vis[node]=1;
        
        for(int i=0;i<adj[node].size();i++)
        {
            int neighbour = adj[node][i];
            if(vis[neighbour]==1 && neighbour!=parent )
            {
                return 1;
            }
            
             if (!vis[neighbour])
             {
                    if (check(adj, neighbour, node, vis)) {
                        return true;
                    }
             }
        }
        return 0;
        
    }
    
        
       
    bool isCycle(int V, vector<vector<int>>& edges)
    {
        vector<int>adj[V];
         for(int i=0;i<edges.size();i++)
        {
            
                adj[edges[i][0]].push_back(edges[i][1]);
                 adj[edges[i][1]].push_back(edges[i][0]);
         
        }
        vector<int>vis(V,0);
        
        for(int i=0;i<V;i++)
        {
            if(!vis[i] && check(adj,i,-1,vis))
            {
               return 1; 
            }
        }
        
        return 0;
        // Code here
        
    }
