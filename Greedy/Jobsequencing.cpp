#include <bits/stdc++.h>
using namespace std;

  static bool cmp(pair<int,int>a,pair<int,int>b)
     {
         return a.second>b.second;
     }
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit)
    {
        // code here
        vector<pair<int,int>>temp;
        int maxDeadline=-1;
        int n = deadline.size();
        
        for(int i=0;i<n;i++)
        {
            temp.push_back({deadline[i],profit[i]});
            maxDeadline= max(maxDeadline,deadline[i]);
        }
        sort(temp.begin(),temp.end(),cmp);
        vector<int>comp(maxDeadline+1,-1);
        vector<int>ans(2,0);
        
        for(int i=0;i<n;i++)
        {
            
            for(int j = temp[i].first;j>0;j--)
            {
                if(comp[j]==-1)
                {
                    comp[j]=1;
                    ans[0]+=1;
                    ans[1]+=temp[i].second ;
                    break;
                }
            }
        }
        return ans;
    }