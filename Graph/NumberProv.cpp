#include <bits/stdc++.h>
using namespace std;

// void dfs(vector<int>adj[],vector<int>& vis,int node,vector<int>&parent ,int index)
//    {
//       vis[node]=1;
//       parent.push_back(index);
//       for(int i=0;i<adj[node].size();i++)
//       {
//           int neighbour = adj[node][i];
//           if(!vis[neighbour])
//           {
//               dfs(adj,vis,neighbour,parent,index);
//           }
//       }

//    }
//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int n  = isConnected.size();
//         vector<int>adj[n];
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 if(i!=j && isConnected[i][j]==1)
//                 {
//                     adj[i].push_back(j);
//                 }
//             }
//         }

//         vector<int>vis(n,0);
//         vector<int>parent;
//         for(int i=0;i<n;i++)
//         {
//             if(!vis[i])
//             {
//                 dfs(adj,vis,i,parent,i);
//             }
//         }
//         int count = 1;
//         for(int i=1;i<n;i++)
//         {
//             if(parent[i]!=parent[i-1])
//             {
//                   count++;
//             }
//         }
//         return count;
//     }

void dfs(vector<int>adj[],vector<int>& vis,int node)
   {
      vis[node]=1;
   
      for(int i=0;i<adj[node].size();i++)
      {
          int neighbour = adj[node][i];
          if(!vis[neighbour])
          {
              dfs(adj,vis,neighbour);
          }
      }

   }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n  = isConnected.size();
        vector<int>adj[n];
        vector<int>vis(n);
        int count = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j && isConnected[i][j]==1)
                {
                    adj[i].push_back(j);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                count++;
                dfs(adj,vis,i);
            }
        }
     
        
        return count;
    }