#include <bits/stdc++.h>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
        
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int i = 0;
        int j = 0;
        int n = g.size();
        int m = s.size();
        int count = 0;

        while(i<n && j<m)
        {
          if(s[j]>=g[i])
          {
            i++;
            j++;
            count++;
          }
          else{
            j++;
          }
        }
        return count;
    }
