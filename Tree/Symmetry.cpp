#include <bits/stdc++.h>
using namespace std;

bool Symmetry(TreeNode * p1,TreeNode * p2)
{    if(p1==NULL && p2==NULL)
     return true;
    if((p1==NULL && p2!=NULL) || (p2==NULL && p1!=NULL))
    return false;
    if(p1->val != p2->val)
    return false;
    return Symmetry(p1->left,p2->right) && Symmetry(p1->right,p2->left);
}

bool isSymmetric(TreeNode* root) 
{
    if(root==NULL)
    return true;
    return Symmetry(root->left,root->right);
    
}