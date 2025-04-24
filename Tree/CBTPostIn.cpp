#include <bits/stdc++.h>
using namespace std;

TreeNode* CBT(vector<int>& inorder, vector<int>& postorder,int start,int end , int & index)
{
    if(start>end)
    return NULL;
    TreeNode * root = new TreeNode(postorder[index]);
    int pos = -1;
    int tar = postorder[index];
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==tar)
       {
          pos=i;
          index--;
           break;
       }

    }
    if(pos==-1)
    return NULL;
    root->right = CBT(inorder,postorder,pos+1,end,index);
    root->left = CBT(inorder,postorder,start,pos-1,index);
    return root;
}
TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
       if(postorder.size()==0)
       return NULL;
       int n = inorder.size();
       int index =n-1;
       return CBT(inorder,postorder,0,n-1,index);
}