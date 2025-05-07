#include <bits/stdc++.h>
using namespace std;

int maxScore(vector<int>& cardPoints, int k)
    {
        int n = cardPoints.size();
        int res = 0;
        if(n==k)
        {
            for(int i=0;i<n;i++)
            res+=cardPoints[i];
            
            return res;
        }
        int lsum=0;
        for(int i=0;i<k;i++)
        {
            lsum=lsum+cardPoints[i];
        }
      res = lsum;
      int rsum=0;
      int index = n-1;
      for(int i=k-1;i>=0;i--)
      {
          lsum=lsum-cardPoints[i];
          rsum=rsum+cardPoints[index];
          index--;
          res = max(res,lsum+rsum);
      }
        return res;
        
    }