#include<bits/stdc++.h>
using namespace std ;

// int findHeight(TreeNode* root)
//     {
//         if(root==NULL)
//         return 0;

//         return 1 + max(findHeight(root->left),findHeight(root->right));
//     }
//    int find (TreeNode * root)
//    {
//     if(root==NULL)
//     return 0;
//     int  l = findHeight(root->left);
//     int r = findHeight(root->right);
//     return  max(l+r ,max(find(root->left),find(root->right)));
//    }

// class Solution {
// public:
//     int diameterOfBinaryTree(TreeNode* root) {
//         return find(root);
//     }
// };

// O(n) time complexity solved
int findHeight(TreeNode * root,int & maxi)
{
   if(root==NULL)
   return 0;
   int l = findHeight(root->left,maxi);
   int r = findHeight(root->right,maxi);
   maxi = max(l+r,maxi);
   return 1 + max(l,r);
}
int diameterOfBinaryTree(TreeNode* root) {
   int maxi = 0;
    findHeight(root,maxi);
    return maxi;
   
}