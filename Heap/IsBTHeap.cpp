#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
       
    }
    return 0;
}


int total_Nodes(Node * root)
   {
       if(root==NULL)
       return 0;
       
       return 1 + total_Nodes(root->left) + total_Nodes(root->right);
   }
   
   bool CBT(Node * root,int index,int n)
   {
       if(root==NULL)
       return 1;
       
       if(index>=n)
       return 0;
       
       bool left = CBT(root->left,2*index+1,n);
       bool right = CBT(root->right,2*index+2,n);
       return left && right;
   }
   
   bool heap(Node * root)
   {
       
       if(root->left)
       {
          if(root->left->data>root->data)
          return 0;
          
          if(! heap(root->left))
          return 0;
       }
       
       if(root->right)
       {
           if(root->right->data>root->data)
           return 0;
           return heap(root->right);
       }
       
       return 1;
   }
    bool isHeap(Node* root) 
    {
        // code here
        int n = total_Nodes(root);
        // cout<<n<<endl;
        
        if(!CBT(root,0,n))
        {
            return 0;
        }
        
        // cout<<"1"<<endl;
        return heap(root);
        
    }