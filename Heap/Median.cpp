#include <bits/stdc++.h>
using namespace std;

 vector<double> getMedian(vector<int> &arr)
    {
        // code here
        priority_queue<int> left;
        priority_queue<int,vector<int>,greater<int>> right;
       vector<double>ans;
       left.push(arr[0]);
       ans.push_back(arr[0]);
       for(int i=1;i<arr.size();i++)
       {
           if(arr[i]<=left.top())
           {
               left.push(arr[i]);
               while(left.size()-1>right.size())
               {
                   right.push(left.top());
                   left.pop();
               }
           }
           else{
               right.push(arr[i]);
               while(right.size()>left.size())
               {
                   left.push(right.top());
                   right.pop();
               }
           }
           
           if(left.size()==right.size())
           {
               ans.push_back((left.top()+right.top())/2.0);
           }
           else
           {
               if(left.size()-1 == right.size())
               {
                   ans.push_back(left.top());
               }
           }
       }
       return ans ;
    }