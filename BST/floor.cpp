#include <bits/stdc++.h>
using namespace std;
int floor(Node* root, int x) 
    {
        // Code here
        if(root==NULL)
        return -1;
        int ans = -1;
        while(root)
        {
            if(root->data==x)
            return x ;
            else if (root->data >x)
            root = root->left ;
            else{
                ans = root->data;
                root = root->right;
            }
        }
        return ans;
    }