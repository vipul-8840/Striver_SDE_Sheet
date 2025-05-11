#include <bits/stdc++.h>
using namespace std;

 int maxMeetings(vector<int>& start, vector<int>& end) 
    {
        // Your code here
        vector<pair<int,int>> temp;
        
        for(int i=0;i<start.size();i++)
        {
            temp.push_back({end[i],start[i]});
        }
        sort(temp.begin(),temp.end());
        
        int j = 0;
        int count = 1;
        for(int i=1;i<temp.size();i++)
        {
            if(temp[i].second > temp[j].first)
            {
                count++;
                j=i;
            }
        }
        return count;
    }
