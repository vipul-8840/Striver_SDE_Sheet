#include <bits/stdc++.h>
using namespace std;

vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) 
    {
        // Code here
        vector<int>dist(V,1e8);
        dist[src]=0;
           for(int i=1;i<V;i++)
           {
               for(int i=0;i<edges.size();i++)
               {
                   int u = edges[i][0];
                   int v = edges[i][1];
                   int w = edges[i][2];
                   if(dist[u]!=1e8 && dist[u]+w<dist[v])
                   {
                       dist[v]=dist[u]+w;
                   }
               }
           }
            for(int i=0;i<edges.size();i++)
               {
                   int u = edges[i][0];
                   int v = edges[i][1];
                   int w = edges[i][2];
                   if(dist[u]!=1e8 && dist[u]+w<dist[v])
                   {
                        return {-1};
                   }
               }
               
               return dist;
        
    }
