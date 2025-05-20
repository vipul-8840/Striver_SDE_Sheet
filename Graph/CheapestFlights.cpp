#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k)
     {
        vector<vector<pair<int,int>>> adj(n);
         for(int i=0;i<flights.size();i++)
         {
            int u = flights[i][0];
            int v = flights[i][1];
            int w = flights[i][2];
          adj[u].push_back({v, w});
         }
         vector<int>dist(n,INT_MAX);

         queue<pair<pair<int,int>,int>> q;
         q.push({{0,src},0});

         dist[src]=0;
         while(!q.empty())
         {
            int distance = q.front().first.first;
             int node= q.front().first.second;
            int step = q.front().second;
             q.pop();
            if(step>k)
             continue;
       
            
        for(auto it : adj[node])
            {
                int adjNode = it.first;
                 int w = it.second;
                  int total_dist = distance + w ;
                  if(total_dist<dist[adjNode])
                  {
                       dist[adjNode]=total_dist;
                       q.push({{total_dist,adjNode},step+1});
                  }
            }
         }
        return dist[dst] == INT_MAX ? -1 : dist[dst];
    }
};