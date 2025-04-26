#include <bits/stdc++.h>
using namespace std;




TreeNode* BST(vector<int>& preorder , int& index,int maxi)
{
    if(index==preorder.size()||preorder[index]>maxi)
    return NULL;

    TreeNode* root = new TreeNode(preorder[index]);
    index++;
    root->left = BST(preorder,index,root->val);
    root->right = BST(preorder,index,maxi);
    return root;
}
TreeNode* bstFromPreorder(vector<int>& preorder)
{
    int index=0;
  return  BST(preorder,index,INT_MAX);
    
    
}