#include <bits/stdc++.h>
using namespace std;

int maxMeetings(vector<int>& start, vector<int>& end) 
    {
        // Your code here
        vector<pair<int,int>>v;
        for(int i =0;i<start.size();i++)
        {
            v.push_back({start[i],end[i]});
        }
        sort(v.begin(),v.end());
        int count = 1 ;
        int index= 0;
        for(int i=1;i<v.size();i++)
        {
            if(v[i].first>v[index].second)
            {
                
                count++;
               index = i;
            }
             
             else
             {
                 if(v[index].second > v[i].second)
                 {
                     index = i;
                 }
                
             }
        }
        return count ;
    }