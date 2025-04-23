#include<bits/stdc++.h>
using namespace std ;
int findCeil(Node* root, int input) {
    if (root == NULL) return -1;
    int ans = -1;
      while(root)
      {
           if(root->data==input)
           {
                ans = input ;
                return ans;
           }
           else if(root->data<input)
           root = root->right;
           else
           {
                ans = root->data ;
                root = root->left;
               
           }
           
          
      }
      return ans;

    // Your code here
}