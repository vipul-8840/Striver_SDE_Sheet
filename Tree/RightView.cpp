#include<bits/stdc++.h>
using namespace std ;

vector<int> rightSideView(TreeNode* root) {
    vector<int>ans;
    if(root==NULL)
    return ans;
    queue<pair<TreeNode *,int>> q;
    map<int,int>m;
    q.push({root,0});
    while(!q.empty())
    {
        auto p  = q.front();
        q.pop();
        TreeNode * curr = p.first ;
        int i =  p.second;
        if(m.find(i)==m.end())
        {
            m[i]=curr->val;
        }

        if(curr->right)
        {
            q.push({curr->right,i+1});
        }
        if(curr->left)
        q.push({curr->left,i+1});
    }
    for(auto it :m)
    {
        ans.push_back(it.second);
    }
    return ans;
}