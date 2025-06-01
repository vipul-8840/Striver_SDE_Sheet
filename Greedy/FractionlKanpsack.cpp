#include <bits/stdc++.h>
using namespace std;

 static bool cmp(pair<int,int> a,pair<int,int>b)
   {
       if((a.first * b.second) >= (a.second * b.first))
       return true ;
       return false ;
   }
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int w)
      {  
        // code here
        vector<pair<int,int>> item ;
        int n = val.size();
        
        for(int i=0;i<n;i++)
        {
            item.push_back({val[i],wt[i]});
        }
        
        sort(item.begin(),item.end(),cmp);
        double total = 0;
        
        for(int i=0;i<item.size();i++)
        {
            if(item[i].second <=w)
            {
                
                total+=item[i].first ;
                w-=item[i].second;
            }
            else{
                total+= (double)((item[i].first)/(double)(item[i].second)) * w ;
                 break;
            }
        }
        return total ;
    }