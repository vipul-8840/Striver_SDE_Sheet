#include <bits/stdc++.h>
using namespace std;

// path : its contains a node which are reachable and at most one .
// no of degree in undirected graph = 2 * edges 
// graph represents in two ways 1. adjaency matrix 2. adjanecy list .

//Matrix Representation 

// int main ()
// {
//     int n ,m;
//     cin>>n>>m;
//     vector<vector<int>>adj(n,vector<int>(n,0));
//     for(int i=0;i<m;i++)
//     {
//         int u,v;
//         cin>>u>>v;
//         adj[u][v]=1;
//         adj[v][u]=1;

//     }

//     return 0;
// }

// space complexity are uses in adjaency matrix O(n^2);
// but when we use adjaency list we save space complexity  and it's S.C. O(2*edges).


// int main ()
// {
//     int n ,m ;
//     cin>>n>>m;
//     vector<int>adj[n];
//     for(int i=0;i<m;i++)
//     {
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     return 0;
// }

//adjaency list



