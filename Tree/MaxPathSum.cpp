#include<bits/stdc++.h>
using namespace std ;
int findSumPath(TreeNode * root,int & maxi)
    {
        if(root==NULL)
        return 0;
        int l = findSumPath(root->left,maxi);
        int r = findSumPath(root->right,maxi);
        if(l>=0 && r>=0)
        maxi = max(l+r+root->val,maxi);
        else if (r<0 && l>=0)
        maxi = max(l+root->val,maxi);
        else if (l<0 && r>=0)
        {
            maxi = max(r+root->val,maxi);
        }
        else {
          maxi = max( root->val ,maxi);
        }
        int a = max(l,r);
        return max(root->val + a ,root->val);

    }


    int maxPathSum(TreeNode* root) {
        int maxi = -1001;
        findSumPath(root,maxi);
        return maxi ;

        
    }