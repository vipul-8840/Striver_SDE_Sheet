#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left, *right;
};


int main()
{
    int T;
    cin>>T;
    while(T--){
       
    }
    return 0;
}


void inorder(Node * root, vector<int> & ans)
    {
        if(root==NULL)
        return ;
        
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
     void postorder(Node*root,int & index, vector<int>&ans)
     {
         if(root==NULL)
         return ;
         postorder(root->left,index,ans);
          postorder(root->right,index,ans);
           root->data = ans[index];
           index++;
         
     }
     void convertToMaxHeapUtil(Node* root) 
    {
        
        // Your code goes here
        vector<int>ans;
        inorder(root,ans);
        int index = 0;
        postorder(root,index,ans);
        
    }