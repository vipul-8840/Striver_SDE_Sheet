#include <bits/stdc++.h>
using namespace std;

// void postorder(TreeNode* root,vector<int>&ans)
// {
//     if(root==NULL)
//       return ;
     
//      postorder(root->left,ans);
//      postorder(root->right,ans);
//      ans.push_back(root->val);

// }

//  vector<int> postorderTraversal(TreeNode* root) {
//      vector<int>ans;
//      postorder(root,ans);
//      return ans;
     
//  }
// using stack 
// vector<int> postorderTraversal(TreeNode* root) {
//     vector<int>ans;
//     if(root==NULL)
//     return ans ;
//     stack<TreeNode *> s;
//     s.push(root);

//     while(!s.empty())
//     { 
//         TreeNode * curr = s.top();
//         s.pop();
//         ans.push_back(curr->val);
//         if(curr->left)
//         s.push(curr->left);
//         if(curr->right)
//         s.push(curr->right);

//     }
//     reverse(ans.begin(),ans.end());
//     return  ans;
    
// }

//using two stack
vector<int> postorderTraversal(TreeNode* root) {
    vector<int>ans;
    if(root==NULL)
    return ans;
    stack<TreeNode *> s1;
    stack<TreeNode *>s2;
    s1.push(root);
    while(!s1.empty())
    {
         TreeNode* curr = s1.top();
         s1.pop();
         s2.push(curr);
         if(curr->left)
         s1.push(curr->left);
          if(curr->right)
         s1.push(curr->right);
    }
    while(!s2.empty())
    {
        ans.push_back(s2.top()->val);
        s2.pop();
    }
    return ans;
}