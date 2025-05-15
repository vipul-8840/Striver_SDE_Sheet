#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int n = adj.size();
        vector<int> vis(n,0);
        vector<int>ans;
        
        queue<int>q;
        q.push(0);
        vis[0]=1;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
             ans.push_back(node);
            for(int i=0;i<adj[node].size();i++)
            {
                if(!vis[adj[node][i]])
                {
                    vis[adj[node][i]]=1;
                    q.push(adj[node][i]);
                   
                }
            }
            
        }
        return ans;
    }