#include <bits/stdc++.h>
using namespace std;

TreeNode * CBT(vector<int>& preorder, vector<int>& inorder,int start,int end,int& index)
    {
        if(start>end)
        return NULL;
        TreeNode * root = new TreeNode (preorder[index]);
        int pos = -1;
        cout<<preorder[index]<<" ";
        int target = preorder[index];
        for(int i=start;i<=end;i++)
        {
            if(inorder[i]==target)
            {
                pos = i ;
                index++;

            }
        }
        if(pos==-1)
        return NULL;
        root->left=CBT(preorder,inorder,start,pos-1,index);
        root->right = CBT(preorder,inorder,pos+1,end,index);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
              if(preorder.size()==0)
              return NULL;
              int n = preorder.size();
              int index= 0;
           return CBT(preorder,inorder,0,n-1,index);
          

    }