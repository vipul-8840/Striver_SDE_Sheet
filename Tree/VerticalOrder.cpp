#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> verticalTraversal(TreeNode* root) 
{
     vector<vector<int>> ans;

    if(root==NULL)
    return ans;
     
    queue<pair<TreeNode *,pair<int,int>>>q;
    map<int,map<int,multiset<int>>> m;
    q.push({root,{0,0}});
    while(!q.empty())
    {
       auto p = q.front();
      TreeNode *  node = p.first;
        q.pop();
        int j = p.second.first ;
        int i = p.second.second ;
        m[j][i].insert(node->val);
        if(node->left)
        {
            q.push({node->left,{j-1,i+1}});
        } 
        if(node->right)
        {
            q.push({node->right,{j+1,i+1}});
        }

    }

    for(auto p:m)
    {
        vector<int>temp;
        for(auto it : p.second)
        {
            temp.insert(temp.end(),it.second.begin(),it.second.end());
        }
        ans.push_back(temp);
    }
    return ans;

}