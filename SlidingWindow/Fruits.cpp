#include <bits/stdc++.h>
using namespace std;

int totalFruit(vector<int>& fruits) 
    {
            int n = fruits.size();
            unordered_map<int,int>m;
            int res=0;
            int start = 0;
            int end = 0;
       while(end<n)
          {
              m[fruits[end]]++;
              if(start<=end && m.size()>2)
              {
                m[fruits[start]]--;
                if(m[fruits[start]]==0)
                {
                    m.erase(fruits[start]);
                }
                start++;
              }
              res = max(res,end-start+1);
              end++;
          }
        return res;
    }