#include <bits/stdc++.h>
using namespace std;

// bool find(TreeNode * root,TreeNode * x,vector<TreeNode *> & ans)
// {
//    if(!root)
//    return false ;
//    ans.push_back(root);
//    if(root==x)
//    return true ;

//    if(find(root->left,x,ans) || find(root->right,x,ans))
//    {
//        return true ;
//    }
//    ans.pop_back();
//    return false;
   
// }
// TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//       vector<TreeNode*> ans1;
//       vector<TreeNode* > ans2;
//       find(root,p,ans1);
//       find(root,q,ans2);
//       int n = ans1.size();
//       for(int i=n-1;i>=0;i--)
//       {
//        for(int j=0;j<ans2.size();j++)
//        {
//             if(ans1[i]==ans2[j])
//              return ans1[i];
//        }
//       }
//       return NULL;
// }
//O(n)
TreeNode* lca(TreeNode*root,TreeNode* p,TreeNode * q)
{
        if(!root || root==p || root==q)
        return root;

        TreeNode* left = lca(root->left,p,q);
        TreeNode* right = lca(root->right,p,q);
        if(left==NULL)
        return right ;
        else if(right==NULL)
        return left ;
        else {
            return root;
       }


} 
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

    return lca(root,p,q);
    
}