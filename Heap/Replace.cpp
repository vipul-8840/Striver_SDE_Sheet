#include <bits/stdc++.h>
using namespace std;

vector<int> replaceWithRank(vector<int> &arr, int N)
    {
       vector<int>temp = arr ;
       vector<int> ans ;
       sort(temp.begin(),temp.end());
       unordered_map<int ,int> m;
       int j = 0;
       for(int i=0;i<N;i++)
       {
           if(m.find(temp[i])==m.end())
           {
               m[temp[i]]=j;
               j++;
           }
       }
       for(int i=0;i<N;i++)
       {
          int index =  m[arr[i]];
           ans.push_back(index+1);
       }
       return ans;
    }