#include <bits/stdc++.h>
using namespace std;


        int widthOfBinaryTree(TreeNode* root)
         {
           if(root==NULL)
           return 0;
          
         long long int maxi=0;
           queue<pair<TreeNode*,long long int>>q;
           q.push({root,0});
           while(!q.empty())
           {
               int n = q.size();
              long long int mini = q.front().second ;
               long long int first,last ;
               for(int i=0;i<n;i++)
               {
                   auto p = q.front();
                     q.pop();
                   TreeNode * node =p.first ;
                  long long int index = p.second - mini ;
                 
                   if(i==0)
                   first = p.second;
                   if(i==n-1)
                   last = p.second ;
                   if(node->left)
                   q.push({node->left,2*index+1});
    
                   if(node->right)
                   q.push({node->right,2*index+2});
    
               }
               maxi = max(last-first+1,maxi);
           }
           return maxi;
    
        }
    