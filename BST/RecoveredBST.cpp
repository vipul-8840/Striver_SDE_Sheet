#include<bits/stdc++.h>
using namespace std ;
class TreeNode{
    public:
    int val ;
    TreeNode*left;
    TreeNode* right;
    TreeNode(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
// void inorder(TreeNode * root,vector<int>&ans)
// {
//      if(root==NULL)
//      return ;
//      inorder(root->left,ans);
//      ans.push_back(root->val);
//      inorder(root->right,ans);


// }
// void pushed(TreeNode* root,stack<TreeNode *> & st)
// {
//     if(root==NULL)
//     return ;
  
//     while(root)
//     {
//         st.push(root);
//         root= root->left;
//     }
//  return ;

// }
// void recoverTree(TreeNode* root)
//  {
//       vector<int>ans;
//       inorder(root,ans);
//       sort(ans.begin(),ans.end());
//       stack<TreeNode*>st;
//       pushed(root,st);
//       int n = ans.size();
//       for(int i=0;i<n;i++)
//       {
//           if(ans[i]==st.top()->val)
//           {
//                 TreeNode * node = st.top();
//                  st.pop();
//                 pushed(node->right,st);
//           }
//           else{
//                   TreeNode* node = st.top();
//                   node->val = ans[i];
//                   st.pop();
//                   pushed(node->right,st);
//           }

//       }
//    return ;
    
// }


void inorder(TreeNode * root,TreeNode * & first,TreeNode * &middle,TreeNode* & prev,TreeNode * & last)
{
    if(root==NULL)
    return;
    inorder(root->left,first,middle,prev,last);
    if(prev!=NULL && root->val <prev->val)
    {
        if(first==NULL)
        {
            first = prev;
            middle = root;
        }
        else
        {
            last = root ;
        }
    }

    prev = root;
    inorder(root->right,first,middle,prev,last);
}
void recoverTree(TreeNode* root) {
    TreeNode * first =NULL ;
    TreeNode * middle = NULL;
    TreeNode * last = NULL;
    TreeNode * prev = new TreeNode(INT_MIN);
    inorder(root,first, middle,prev,last);
     cout<<first <<" "<<last <<" "<<middle ;
    if(first && last)
   {
         swap(first->val,last->val);
        
   }

    else if (first && middle){
        swap(first->val,middle->val);
        return ;
    }

}