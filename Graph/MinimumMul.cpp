#include <bits/stdc++.h>
using namespace std;

int minimumMultiplications(vector<int>& arr, int start, int end) 
    {
        // code here
         if (start == end) return 0;
        queue<pair<int,int>> q;
        q.push({start,0});
        vector<int>dist(100000,INT_MAX);
        dist[start]=0;
        while(!q.empty())
        {
            int node = q.front().first;
            int step = q.front().second;
            q.pop();
            
           for(int i=0;i<arr.size();i++)
           {
               int num = (arr[i]*node)% 100000;
               
               if(num==end)
               return step+1;
               
               if(dist[num]>step+1)
               {
                   dist[num]=step+1;
                   q.push({num,step+1});
               }
               
           }
        }
        
        return -1;
        
    }
