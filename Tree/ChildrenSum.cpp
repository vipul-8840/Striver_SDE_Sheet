#include<bits/stdc++.h>
using namespace std ;


int isSumProperty(Node *root)
    {
     // Add your code here
     if(root==NULL)
     return 1;
     queue<Node *>q;
     q.push(root);
     while(!q.empty())
     {
           int n = q.size();
           
           for(int i=0;i<n;i++)
           {
              Node * curr = q.front();
              q.pop();
              int a = 0;
              int b = 0;
               if(curr->left==NULL && curr->right==NULL)
               continue ;
              if(curr->left)
              {
                  q.push(curr->left);
                  a = curr->left->data;
                  
              }
              if(curr->right)
              {
                  q.push(curr->right);
                  b = curr->right->data;
              }
              if(curr->data != (a+b))
              {
                   return 0;
              }
              
           }
     }
     return true ;
     
    }