#include <bits/stdc++.h>
using namespace std;

bool find(TreeNode* root,int k,set<int>&s)
{
    if(root==NULL)
    return 0;
    int a = root->val;
    if(s.find(k-a)!=s.end())
    {
        return true;
    }
    s.insert(root->val);
  return  find(root->left,k,s)|| find(root->right,k,s);

}
bool findTarget(TreeNode* root, int k) {
    set<int>s;
    return find(root,k,s);
    
}
