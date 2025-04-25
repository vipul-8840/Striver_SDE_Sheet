#include <bits/stdc++.h>
using namespace std;

TreeNode* insertIntoBST(TreeNode* root, int data) {
    if(root==NULL)
    return  new TreeNode(data);
    TreeNode * curr = root ;
    TreeNode * temp = new TreeNode(data);

    while(curr)
    {
        if(curr->val<data)
        {
              if(!curr->right)
              {
                  curr->right = temp;
                  break;
              }
              else{
                curr = curr->right;
              }
        }
        else{
             if(!curr->left)
             {
                curr->left = temp;
                break;
             }
             else{
               curr = curr->left ;
             }
        }
    }
    return root;
}