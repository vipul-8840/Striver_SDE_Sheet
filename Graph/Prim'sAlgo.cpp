#include <bits/stdc++.h>
using namespace std;

 
    int spanningTree(int V, vector<vector<int>> adj[]) 
    {
        // code here
        vector<int> vis(V,0);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,0});
        
        int sum = 0;
        while(!pq.empty())
        {
            int node = pq.top().second;
            int dist = pq.top().first;
            pq.pop();
            if(vis[node]==0)
            {
                sum+=dist;
                vis[node]=1;
                for(int i=0;i<adj[node].size();i++)
                {
                    int adjNode = adj[node][i][0];
                    int w = adj[node][i][1];
                    if(vis[adjNode]==0)
                    {
                        pq.push({w,adjNode});
                    }
                }
            }
        }
        
        return sum;
    }