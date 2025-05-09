#include <bits/stdc++.h>
using namespace std;
// with help of  priorty_queue 
int minCost(vector<int>& arr)
 {
        // code here
        if(arr.size()<=1)
        return 0;
         priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());
        int res = 0;
        while(pq.size()>1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
             int c = a+b;
             pq.push(c);
             res+=c;
            
        }
        return res;
    }