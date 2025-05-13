#include <bits/stdc++.h>
using namespace std;

vector<int> minPartition(int N)
    {
        
        int currency[]={2000,500,200,100,50,20,10,5,2,1};
        vector<int>ans;
        int i=0;
        while(N)
        {
            int a =  N/currency[i];
            
            while(a--)
            {
                ans.push_back(currency[i]);
             
            }
            N = N%currency[i];
            i++;
        }
        
        return ans;
    }
