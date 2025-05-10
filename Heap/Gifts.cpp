#include <bits/stdc++.h>
using namespace std;

 long long pickGifts(vector<int>& gifts, int k)
     {
        priority_queue<int>pq(gifts.begin(),gifts.end());
        while(k>0 && !pq.empty())
        {
            int a = pq.top();
            pq.pop();
            int b = sqrt(a);
            pq.push(b);
            k--;

        }

        long long sum = 0;
        while(!pq.empty())
        {
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
