#include <bits/stdc++.h>
using namespace std;
class Node{
    public :
     int key;
     Node * left;
     Node * right;
     Node(int key)
     {
        this->key = key;
        left=NULL;
        right = NULL;
     }
};

Node * predecessor (Node * root,int key)
   {
        Node * curr = NULL;
         while(root)
         {
             if(root->key>=key)
             {
                 root = root->left;
             }
             else{
                  curr = root ;
                  root=root->right ;
             }
         }
         return curr;
   }
Node * successor (Node * root,int key)
   {
       Node * curr = NULL;
         while(root)
         {
             if(root->key<=key)
             {
                 root = root->right;
             }
             else{
                  curr = root ;
                  root=root->left ;
             }
         }
         return curr;
   }
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key) 
    {
        // Your code goes here
       pre = predecessor(root,key);
       suc =  successor(root,key);
    }
