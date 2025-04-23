#include <bits/stdc++.h>
using namespace std;

void markParents(TreeNode * root,  unordered_map<TreeNode *,TreeNode *> & m)
{
      if(root==NULL)
      return ;
      queue<TreeNode *>q;
      q.push(root);
      while(!q.empty())
      {
         TreeNode * curr = q.front();
         q.pop();
         if(curr->left)
         {
            m[curr->left]=curr;
            q.push(curr->left);
         }
         if(curr->right)
         {
            m[curr->right]=curr;
            q.push(curr->right);
         }
      }
      return ;
}
vector<int> distanceK(TreeNode* root, TreeNode* target, int k)
{
    vector<int>ans;
    if(root==NULL)
    return ans;
    unordered_map<TreeNode *,TreeNode *>m;
    markParents(root,m);
    unordered_map<TreeNode*,bool>vis;
    queue<TreeNode*>q;
    q.push(target);
    vis[target]=true;
    int dist = 0;
    while(!q.empty())
    {
          if(dist==k)
          break;
          dist++;             
          
          int n = q.size();

          for(int i=0;i<n;i++)
          {
             TreeNode* curr = q.front();
             q.pop();
             if(curr->left && !vis[curr->left])
             {
                vis[curr->left]=1;
                q.push(curr->left);
             } 
             if(curr->right && !vis[curr->right])
             {
                vis[curr->right]=1;
                q.push(curr->right);
             }
             if(m[curr] && !vis[m[curr]])
             {
                vis[m[curr]]=1;
                q.push(m[curr]);
             }

          }


    }
    //  vector<int>ans;
    while(!q.empty())
    {
         TreeNode * curr = q.front();
         q.pop();
         ans.push_back(curr->val);
    }
    return ans;

}