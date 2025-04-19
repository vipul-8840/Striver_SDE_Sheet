// #include<bits/stdc++.h>
// using namespace std ;
// void preorder(TreeNode* root,vector<int>&ans)
// {
//     if(root==NULL)
//     return ;

//     ans.push_back(root->val);
//     preorder(root->left,ans);
//     preorder(root->right,ans);

// }
// vector<int> preorderTraversal(TreeNode* root)
//  {
//        vector<int> ans ;
//        preorder(root,ans);
//        return ans ;
    
// }

//iterative preorder traversal 
vector<int> preorderTraversal(TreeNode* root) {
    stack<TreeNode *> s;

     vector<int> ans;
     if(root==NULL)
     return ans;
    s.push(root);
    while(!s.empty())
    {
        TreeNode* curr = s.top();
        s.pop();
        ans.push_back(curr->val);
        if(curr->right)
        s.push(curr->right);
        if(curr->left)
        s.push(curr->left);
    }
    return ans;
}