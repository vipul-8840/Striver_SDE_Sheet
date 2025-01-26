#include <bits/stdc++.h>
using namespace std;

 int maxProfit(vector<int>& prices) 
    {
        int ans =0;
        int mini = prices[0];

        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<mini)
            {
                mini = prices[i];
            }
            else
            {
                ans = max(ans,prices[i]-mini);
            }
        }
        return ans;


         }
