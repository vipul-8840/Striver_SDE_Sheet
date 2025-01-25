#include<bits/stdc++.h>
using namespace std;

//  Pascal's Triangle Using Combination Formula
     vector<int>generateRow(int n)
     {
        vector<int>temp;

        int ans = 1;
        temp.push_back(1);

        for(int col=1;col<n;col++)
        {
            ans = ans * (n-col);
            ans = ans/col;
            temp.push_back(ans);
        }
        return temp;
     }

    vector<vector<int>> generate(int Rows) 
    {
          vector<vector<int>>res;
          for(int i=1;i<=Rows;i++)
          {
            vector<int>temp = generateRow(i);
            res.push_back(temp);
          }
          return res;
    }
