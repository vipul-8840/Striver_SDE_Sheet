#include <bits/stdc++.h>
using namespace std;

vector<int> candyStore(int candies[], int N, int K) {
        // Write Your Code here
        sort(candies,candies+N);
        vector<int> ans;
        int start = 0;
        int end = N-1;
        int mini = 0;
        int maxi = 0;
        while(start<=end)
        {
            mini+=candies[start];
            end-=K;
            start++;
        }
        ans.push_back(mini);
        start = 0;
        end = N-1;
        while(end>=start)
        {
            maxi+=candies[end];
            start+=K;
            end--;
            
        }
        ans.push_back(maxi);
        return ans;
    }
