#include <bits/stdc++.h>
using namespace std;

TreeNode * find(TreeNode * root)
   {
     if(root->right==NULL)
     return root ;
     return find(root->right);
   }
   TreeNode * helper(TreeNode * root)
   {
    if(root->left==NULL)
    return root->right;
    if(root->right==NULL)
    return root->left ;
    TreeNode* LastNode = find(root->left);
    LastNode->right = root->right;
    return root->left ;

   }
    TreeNode* deleteNode(TreeNode* root, int key) 
    {
        if(root==NULL)
        return root;
        if(root->val==key)
        return helper(root);
        TreeNode* curr = root;
        while(curr)
        {
            if(curr->val >key)
            {
                if(curr->left!=NULL && curr->left->val==key)
                {
                     curr->left = helper(curr->left);
                      break;
                }
                else
                {
                    curr = curr->left;
                }
            }
            else
            {
                if(curr->right!=NULL && curr->right->val==key)
                {
                   curr->right = helper(curr->right);
                   break;
                }
                else
                {
                    curr = curr->right;
                }
            }
        }
        return root;
    }
