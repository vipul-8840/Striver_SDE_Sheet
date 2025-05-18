#include <bits/stdc++.h>
using namespace std;

bool canFinish(int V, vector<vector<int>>& pre)
     {
          vector<vector<int>> adj(V);
        vector<int> Indeg(V, 0);
        queue<int> q;
        vector<int> ans;

        for(int i = 0; i < pre.size(); i++) {
            adj[pre[i][0]].push_back(pre[i][1]);
            Indeg[pre[i][1]]++;
        }

        for(int i = 0; i < V; i++) {
            if(Indeg[i] == 0)
                q.push(i);
        }

        while(!q.empty()) {
            int node = q.front();
            q.pop();
            ans.push_back(node);

            for(int adjNode : adj[node]) {
                Indeg[adjNode]--;
                if(Indeg[adjNode] == 0)
                    q.push(adjNode);
            }
        }

        return ans.size() == V;
    }