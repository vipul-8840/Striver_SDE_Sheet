#include <bits/stdc++.h>
using namespace std;

 void topoSort(vector<pair<int,int>> adj[],int node, vector<int>& vis,stack<int>& s)
    {
        
        vis[node]=1;
        for(int i = 0;i<adj[node].size();i++)
        {
            int adjNode = adj[node][i].first;
            if(!vis[adjNode])
            {
                 topoSort(adj,adjNode,vis,s);
            }
        }
        s.push(node);
        
    }
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges)
    {
        // code here
        
        vector<pair<int,int>> adj[V];
        for(int i=0;i<E;i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            adj[u].push_back({v,w});
             
        }
        
        vector<int>vis(V);
        stack<int>s;
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                topoSort(adj,i,vis,s);
            }
        }
        vector<int>dist(V,INT_MAX);
        dist[0]=0;
        
        while(!s.empty())
{
    int node = s.top();
    s.pop();
    
                if(dist[node] != INT_MAX)  
                {
                    for(int i=0;i<adj[node].size();i++)
                    {
                        int adjNode = adj[node][i].first;
                        int distance = dist[node] + adj[node][i].second;
                        if(distance < dist[adjNode])
                        {
                            dist[adjNode] = distance;
                        }
                    }
                }
            }
                     
         for(int i=0;i<V;i++)
         {
             if(dist[i]==INT_MAX)
             {
                 dist[i]=-1;
             }
         }
        
        return dist;
    }