#include <bits/stdc++.h>
using namespace std;

void flatten(TreeNode* root)
     {
        if(root==NULL)
        return ;
        while(root)
        {
            if(!root->left)
            root=root->right;
           else
           {
              TreeNode * curr = root->left;
              while(curr->right)
              {
                curr = curr->right;
              }
              curr->right = root->right;
              root->right = root->left;
              root->left=NULL;
              root = root->right;
           }
        }
        return;
    }
