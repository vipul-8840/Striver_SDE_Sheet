#include <bits/stdc++.h>
using namespace std;

// // void inorder(TreeNode* root,vector<int>&ans)
// //      {
// //         if(root==NULL)
// //         return ;
// //         inorder(root->left,ans);
// //         ans.push_back(root->val);
// //         inorder(root->right,ans);
// //      }
// //     vector<int> inorderTraversal(TreeNode* root) {
// //         vector<int>ans;
// //         inorder(root,ans);
// //         return ans;
        
// //     }

// //iterative order traversal to solve this problem 
// vector<int> inorderTraversal(TreeNode* root) {
//     TreeNode* curr = root;
//     vector<int>ans;
//     if(root==NULL)
//     return ans;
//     stack<TreeNode*>st;
//     while(true)
//     {
//        if(curr)
//        {
//            st.push(curr);
//            curr =curr->left ; 
//        }
//        else{
//            if(st.empty())
//            {
//                break;
//            }
//            curr = st.top();
//             st.pop();
//            ans.push_back(curr->val);
//            curr = curr->right ;
//        }
    
//     }
//     return ans;
    
// }


//Morris order Traversal 
vector<int> inorderTraversal(TreeNode* root)
{
   vector<int>ans;
   if(root==NULL)
   return ans ;
   while(root)
   {
       if(!root->left)
       {
           ans.push_back(root->val);
           root=root->right;
       }
       else{
             TreeNode * curr = root->left;
             while(curr->right && curr->right!=root)
             {
                  curr = curr->right;
             }
             if(!curr->right)
             {
               curr->right = root;
               root=root->left;
             }
             else{
               curr->right=NULL;
               ans.push_back(root->val);
               root=root->right;
             }
       }
   }
   return ans;
}