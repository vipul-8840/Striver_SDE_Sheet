#include<bits/stdc++.h>
using namespace std ;
int findHeight(TreeNode* root)
    {
        if(root==NULL)
        return 0;

        return 1 + max(findHeight(root->left),findHeight(root->right));
    }
    int maxDepth(TreeNode* root) {
        return findHeight(root);
    }