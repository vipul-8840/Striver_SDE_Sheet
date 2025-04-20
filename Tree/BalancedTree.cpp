#include <bits/stdc++.h>
using namespace std;

// int findHeight(TreeNode* root)
//     {
//         if(root==NULL)
//         return 0;

//         return 1 + max(findHeight(root->left),findHeight         (root->right));
//     }
//  bool Balanced(TreeNode * root)
//  {
//     if(root==NULL)
//     return true;
//     int l = findHeight(root->left);
//     int r = findHeight(root->right);
//     if(abs(l-r)>1)
//     return false ;
//     return Balanced(root->left) && Balanced(root->right);
//  }
// class Solution
//  {
// public:
//        bool isBalanced(TreeNode* root) {
//         return Balanced(root);
//     }
// };

// O(n)
int findHeight(TreeNode * root)
    {
        if(root==NULL)
        return 0;

        int l = findHeight(root->left);
        if(l==-1)
        return -1;
        int r = findHeight(root->right);
        if(r==-1)
        return -1;

        if(abs(l-r)>1) return -1;

        return 1 + max(l,r);

    }
    bool isBalanced(TreeNode* root) {
        return findHeight(root) != -1;
    }