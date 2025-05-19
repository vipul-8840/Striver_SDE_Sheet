#include <bits/stdc++.h>
using namespace std;

vector<int> shortestPath(vector<vector<int>>& adj, int src)
    {
        // code here
        int V = adj.size();
        queue<int>q;
        vector<int>dist(V,INT_MAX);
        q.push(src);
        dist[src]=0;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
          for(int i=0;i<adj[node].size();i++)
          {
               int adjNode = adj[node][i];
               int distance = dist[node]+1;
               if(distance<dist[adjNode])
               {
                   dist[adjNode]=distance;
                   q.push(adjNode);
               }
          }
        }
        for(int i=0;i<V;i++)
        {
            if(dist[i]==INT_MAX)
            dist[i]=-1;
        }
        return dist;
       
    }
