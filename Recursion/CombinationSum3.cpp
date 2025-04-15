#include<bits/stdc++.h>
using namespace std;
void  find(int index ,int k ,int n , vector<vector<int>>& ans,vector<int>&temp)
    {
        if(index>9)
        {
            if(n==0 && temp.size()==k)
            {
                ans.push_back(temp);
                return ;
            }
        }
        if(n==0)
        {
             if(temp.size()==k)
              {
                
                ans.push_back(temp);
                return ;
              }
        }

        for(int i = index ;i<=9;i++)
        {
            if(i>n)
            return ;
            temp.push_back(i);
            
              find(i+1,k,n-i,ans,temp);
           
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) 
    {
        vector<vector<int>> ans ;
        vector<int>temp;
        bool flag = false ;
        find(1,k,n,ans,temp);
        return ans;

        
    }
