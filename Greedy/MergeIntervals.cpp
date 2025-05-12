#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
            sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int n = intervals.size();
        // vector<int>temp(2);
        for(int i=0;i<n;i++)
        {
            if(ans.empty()|| ans.back()[1]<intervals[i][0])
            {
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1]=max(intervals[i][1],ans.back()[1]);
            }
        }
        return ans;
    }