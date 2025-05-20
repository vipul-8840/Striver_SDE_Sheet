#include <bits/stdc++.h>
using namespace std;

//  vector<int> dijkstra(int V, vector<vector<int>> &edges, int src)
//     {
//         vector<pair<int,int>> adj[V];
       
//         for(int i=0;i<edges.size();i++)
//         {
//             int u = edges[i][0];
//             int v = edges[i][1];
//             int w = edges[i][2];
//             adj[u].push_back({v,w});
//             adj[v].push_back({u,w});
//         }
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
//         vector<int>dist(V,INT_MAX);
//         dist[src]=0;
//         pq.push({0,src});
//         while(!pq.empty())
//         {
//             int node = pq.top().second;
//             int distance = pq.top().first;
//             pq.pop();
//             for(int i=0;i<adj[node].size();i++)
//             {
               
//                 int adjNode=adj[node][i].first;
//                 int w = adj[node][i].second;
//                 int total_dist = distance + w ;
//                 if(total_dist<dist[adjNode])
//                 {
                 
//                     dist[adjNode]=total_dist;
//                     pq.push({total_dist,adjNode});
                    
//                 }
//             }
            
            
//         }
//         return dist;
        
    // }

    //with help of sets 

     vector<int> dijkstra(int V, vector<vector<int>> &edges, int src)
    {
        // Code here
        
        set<pair<int,int>>st;
        vector<pair<int,int>>adj[V];
        for(int i=0;i<edges.size();i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
            
        }
        
        st.insert({0,src});
        vector<int>dist(V,INT_MAX);
        dist[src]=0;
        while(!st.empty())
        {
            auto it = *(st.begin());
            int distance = it.first;
            int node = it.second;
            st.erase(it);
            
            for(int i=0;i<adj[node].size();i++)
            {
                int adjNode = adj[node][i].first;
                int w = adj[node][i].second;
                int newDist = distance + w;
                
                if(newDist<dist[adjNode])
                {
                    if(dist[adjNode]!=INT_MAX)
                    {
                       st.erase({dist[adjNode],adjNode}); 
                    }
                    st.insert({newDist,adjNode});
                    dist[adjNode]=newDist;
                }
                
            }
            
            
        }
        return dist ;
        
    }