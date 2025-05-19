#include <bits/stdc++.h>
using namespace std;

 vector<int> dijkstra(int V, vector<vector<int>> &edges, int src)
    {
        vector<pair<int,int>> adj[V];
       
        for(int i=0;i<edges.size();i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int>dist(V,INT_MAX);
        dist[src]=0;
        pq.push({0,src});
        while(!pq.empty())
        {
            int node = pq.top().second;
            int distance = pq.top().first;
            pq.pop();
            for(int i=0;i<adj[node].size();i++)
            {
               
                int adjNode=adj[node][i].first;
                int w = adj[node][i].second;
                int total_dist = distance + w ;
                if(total_dist<dist[adjNode])
                {
                 
                    dist[adjNode]=total_dist;
                    pq.push({total_dist,adjNode});
                    
                }
            }
            
            
        }
        return dist;
        
    }