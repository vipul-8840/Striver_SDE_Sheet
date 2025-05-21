#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   typedef pair<int,int> P;
    int networkDelayTime(vector<vector<int>>& times, int n, int k) 
    {
         vector<vector<pair<int,int>>>adj(n+1);
         for(int i=0;i<times.size();i++)
         {
            int u = times[i][0];
            int v = times[i][1];
            int w = times[i][2];
            adj[u].push_back({v,w});
         }

         queue<pair<int,int>>q;
         q.push({0,k});
         vector<int> dist(n+1,INT_MAX);
         dist[k]=0;

         while(!q.empty())
         {
            int node = q.front().second;
            int step = q.front().first;
            q.pop();
            for(auto it: adj[node])
            {
                int adjNode = it.first;
                int w = it.second;
                int time = w + step;
                if(time<dist[adjNode])
                {
                    dist[adjNode]=time;
                    q.push({time,adjNode});
                }
            }
         }
         dist[0]=0;
         int maxTime = *max_element(dist.begin(), dist.end());
        return maxTime == INT_MAX ? -1 : maxTime;
    }
};
