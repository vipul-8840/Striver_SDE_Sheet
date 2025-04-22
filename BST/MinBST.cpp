#include<bits/stdc++.h>
using namespace std ;

class TreeNode{
    public:
    int data ;
    TreeNode * left;
   TreeNode *  right ;

   TreeNode()
   {

   }
   TreeNode (int data)
   {
    this->data = data ;
    this->left = NULL;
    this->right = NULL;
   }
};

int minBst(TreeNode * root)
{
    if(root==NULL)
    return 0;
    TreeNode * curr =root ;
    while(curr->left)
    {
       curr = curr->left ;
    }
   return curr->data;
}
int main ()
{
    TreeNode * root = new TreeNode(25);
    root->left = new TreeNode(15);
    root->right = new TreeNode (50);
    root->left->left = new TreeNode(10);
    root->right->right = new TreeNode(60);
    cout<<minBst(root)<<endl;
    return 0;
}