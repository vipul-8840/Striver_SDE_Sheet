#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool cmp(vector<int>a,vector<int>b)
    {
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end(),cmp);
        int j = 0;
         int count = 1;

        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]>=intervals[j][1])
            {
                 count++;
                 j=i;
            }
        }
        return intervals.size()-count;

    }
};
