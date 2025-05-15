#include <bits/stdc++.h>
using namespace std;

// path : its contains a node which are reachable and at most one .
// no of degree in undirected graph = 2 * edges 
// graph represents in two ways 1. adjaency matrix 2. adjanecy list .

//Matrix Representation 

int main ()
{
    int n ,m;
    cin>>n>>m;
    vector<vector<int>>adj(n,vector<int>(n,0));
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;

    }

    return 0;
}