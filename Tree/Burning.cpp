#include <bits/stdc++.h>
using namespace std;

void markParents(Node * root,  unordered_map<Node *,Node *> & m)
{
      if(root==NULL)
      return ;
      queue<Node *>q;
      q.push(root);
      while(!q.empty())
      {
         Node * curr = q.front();
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
   Node *  find(Node * root,int target)
   {
       if(root==NULL)
       return NULL;
       if(root->data==target)
       return root ;
     Node* leftResult = find(root->left, target);
      if (leftResult != NULL) return leftResult;

    return find(root->right, target);
       
   }
    int minTime(Node* root, int target) {
        // code here
        
    if(root==NULL)
    return 0;
    unordered_map<Node *,Node *>m;
    markParents(root,m);
    unordered_map<Node*,bool>vis;
    queue<Node*>q;
    Node * tar = find(root,target);
    q.push(tar);
    vis[tar]=true;
    int time = 0;
    while(!q.empty())
    {
        
          time++;             
          
          int n = q.size();

          for(int i=0;i<n;i++)
          {
             Node* curr = q.front();
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
    return time-1;
        
    }