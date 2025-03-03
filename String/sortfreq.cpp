#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s)
{
    unordered_map<char,int>m;
    for(int i=0;i<s.size();i++)
    {
        m[s[i]]++;
    }
  priority_queue<pair<int,char>> pq ;
  for(auto it :m)
  {
    pq.push({it.second,it.first});
  }
  string res = "";
  while(!pq.empty())
  {
    auto p = pq.top();
    pq.pop();
    res+=string(p.first, p.second);

  }
    
    return res;
}