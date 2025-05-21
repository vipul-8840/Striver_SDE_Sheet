#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    typedef pair<long long int, int> P;
     int Mod = 1e9 + 7;
    int countPaths(int n, vector<vector<int>>& roads) {
        // code here
          vector<P> adj[n];
        for(int i=0;i<roads.size();i++)
        {
            int u = roads[i][0];
            int v = roads[i][1];
            int t = roads[i][2];
            adj[u].push_back({v,t});
            adj[v].push_back({u,t});

        }
        priority_queue<P,vector<P>,greater<P>>pq;
       vector<long long int> timeTaken(n, LLONG_MAX);
        vector<int>way(n);
        pq.push({0,0});
        way[0]=1;
        timeTaken[0]=0;
        while(!pq.empty())
        {
            int currNode = pq.top().second;
            long long int time= pq.top().first;
            pq.pop();

            for(int i=0;i<adj[currNode].size();i++)
            {
                int adjNode = adj[currNode][i].first;
                int t = adj[currNode][i].second;
               long long int total_time = t + time;
                if(total_time<timeTaken[adjNode])
                {
                    timeTaken[adjNode]=total_time;
                    pq.push({total_time,adjNode});
                    way[adjNode]= way[currNode];
                }
                else if(total_time==timeTaken[adjNode])
                {
                    way[adjNode]= (way[adjNode] + way[currNode])%Mod;
                }
            }
        }
        return way[n-1]%Mod;
        
    }