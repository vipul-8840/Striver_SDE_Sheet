#include <bits/stdc++.h>
using namespace std;

//  void dfs (vector<int>adj[],int node,int vis[],stack<int>&st)
//    {
//          vis[node]=1;
//          for(int i=0;i<adj[node].size();i++)
//          {
//              int adjNode = adj[node][i];
//              if(!vis[adjNode])
//              {
//                  dfs(adj,adjNode,vis,st);
//              }
//          }
//          st.push(node);
         
//    }
//     vector<int> topoSort(int V, vector<vector<int>>& edges) 
//     {
//         // code here
//         vector<int>adj[V];
//         int vis[V]={0};
//         stack<int>st;
        
//         for(int i=0;i<edges.size();i++)
//         {
//             adj[edges[i][0]].push_back(edges[i][1]);
//         }
        
//         for(int i=0;i<V;i++)
//         {
//             if(!vis[i])
//             {
//                 dfs(adj,i,vis,st);
//             }
//         }
//         vector<int>ans;
//         while(!st.empty())
//         {
//             ans.push_back(st.top());
//             st.pop();
//         }
//         return ans;
//     }

//  bfs traversal algorithm khan's algorithm 
vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<int>inDeg(V);
        
        vector<int>adj[V];
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        
        for(int i=0;i<edges.size();i++)
        {
            inDeg[edges[i][1]]++;
        }
        
        queue<int>q;
        for(int i=0;i<V;i++)
        {
            if(inDeg[i]==0)
            {
                q.push(i);
            }
        }
        
        vector<int>ans;
        while(!q.empty())
        {
            int node = q.front();
            ans.push_back(node);
            q.pop();
            for(int i=0;i<adj[node].size();i++)
            {
                int adjNode = adj[node][i];
                inDeg[adjNode]--;
                if(inDeg[adjNode]==0)
                q.push(adjNode);
            }
        }
        return ans;
    }