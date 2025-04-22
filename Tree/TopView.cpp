#include<bits/stdc++.h>
using namespace std ;
vector<int> topView(Node *root) {
    // code here
    vector<int>ans;
    if(root==NULL)
    return ans;
    queue<pair<Node *,int>> q;
    map<int,int>m;
    q.push({root,0});
    while(!q.empty())
    {
       auto p= q.front();
       q.pop();
       Node * curr  = p.first ;
       int j = p.second ;
       
       if(m.find(j)==m.end())
       {
           m[j]=curr->data;
       }
       
       if(curr->left)
       {
           q.push({curr->left,j-1});
       }
       if(curr->right)
       {
           q.push({curr->right,j+1});
       }
        
        
    }
    for(auto it:m)
    {
        ans.push_back(it.second);
    }
    return ans;
}