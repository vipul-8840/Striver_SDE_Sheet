#include <bits/stdc++.h>
using namespace std;

  vector<int> shortestPath(int n, int m, vector<vector<int>>& edges)
    {
        // Code here
        
        vector<pair<int,int>> adj[n+1];
        for(int i=0;i<m;i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        
         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
         vector<int>parent(n+1);
         for(int i=0;i<=n;i++)
         {
             parent[i]=i;
         }
         vector<int>dist(n+1,INT_MAX);
         pq.push({0,1});
         dist[1]=0;
         
         while(!pq.empty())
         {
             int node = pq.top().second;
             int distance = pq.top().first;
             pq.pop();
             for(int i=0;i<adj[node].size();i++)
             {
                 int adjNode = adj[node][i].first;
                 int w = adj[node][i].second;
                 int total_dist= w + distance;
                 if(total_dist<dist[adjNode])
                 {
                     parent[adjNode]=node;
                     pq.push({total_dist,adjNode});
                     dist[adjNode]=total_dist;
                 }
                 
                 
             }
         }
         
         if(dist[n]==INT_MAX)
         return {-1};
         
         vector<int>ans;
       int target = n;
         while(target!=1)
         {
             ans.push_back(target);
             target = parent[target];
             
         }
         ans.push_back(target);
         ans.push_back(dist[n]);
         reverse(ans.begin(),ans.end());
          return ans;
    }
