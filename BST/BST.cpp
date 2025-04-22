#include <bits/stdc++.h>
using namespace std;

TreeNode* searchBST(TreeNode* root, int data) 
{
    if(root==NULL)
    return NULL ;
    TreeNode * curr = root ;
    while(curr)
    {
        if(curr->val == data)
       { 
        return curr ;
       }
        if(curr->val < data)
        {
            curr = curr->right;
        }
        else{
            curr = curr->left;
        }
    }
    return NULL;
}