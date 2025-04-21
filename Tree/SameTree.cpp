#include<bits/stdc++.h>
using namespace std ;
bool isSame(TreeNode * p,TreeNode * q)
{
      if(p==NULL && q == NULL)
      return true;
      if((p==NULL && q!=NULL) ||( p!=NULL && q==NULL))
      return 0;
      if(p->val!=q->val )
      return 0;
      return isSame(p->left,q->left) && isSame(p->right,q->right);
      
     
}
bool isSameTree(TreeNode* p, TreeNode* q)
{
   
   return  isSame(p,q);
    
}