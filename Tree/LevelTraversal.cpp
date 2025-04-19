
#include<bits/stdc++.h>
using namespace std ;
vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>>ans;
    if(root==NULL)
    return ans;
    queue<TreeNode*> q;
    
    q.push(root);
    while(!q.empty())
    {
      int n = q.size();
      vector<int>temp;
      for(int i=0;i<n;i++)
      {
         TreeNode * curr = q.front();
         q.pop();
         temp.push_back(curr->val);
          if(curr->left)
          q.push(curr->left);
          if(curr->right)
          q.push(curr->right);

        
      }
      ans.push_back(temp);
    }
    return ans;
}