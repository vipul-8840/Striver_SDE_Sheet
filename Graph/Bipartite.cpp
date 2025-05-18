#include <bits/stdc++.h>
using namespace std;

// adjacent will not be same in color 
// linear graph always bipartite 
// cylcic graph with even no of node are always bipartite
// odd no of nodes cyclic graph always not bipratite 

class Solution {
public:
   bool check(vector<vector<int>>& adj,vector<int>&color ,int node)
   {
       color[node]=0;
       queue<int>q;
       q.push(node);
       while(!q.empty())
       {
        int node = q.front();
        q.pop();
          for(int i=0;i<adj[node].size();i++)
          {
              int neighbour= adj[node][i];
              if(color[neighbour]==-1)
              {
                color[neighbour]=!color[node];
                q.push(neighbour);
              }
              else{
                   if(color[neighbour]==color[node])
                   return false;
              }
          }
       }
       return true;
   }
    bool isBipartite(vector<vector<int>>& adj)
     {
        
          int m = adj.size();
          vector<int>color(m,-1);
          for(int i=0;i<m;i++)
          {
            if(color[i]==-1)
               if(!check(adj,color,i))
               {
                return false;
               }
          }
          return true;
    }
};