void leaf(TreeNode* root , int index ,int l ,int & count)
   {
     if(root==NULL)
     return ;
     if(root->left==NULL && root->right==NULL && index==l)
      count++;
     leaf(root->left,index+1,l,count);
     leaf(root->right,index+1,l,count);

   }
    int height(TreeNode * root)
    {
        if(root==NULL)
        return 0;
        int l = height(root->left);
        int r = height(root->right);
        return 1 + max(l,r);
    }
    int countNodes(TreeNode* root)
    {
        if(root==NULL)
        return 0;
        if(!root->left && !root->right)
        return 1;
        int l = height(root);
        cout<<l<<endl;
        int count = 0;
        leaf(root,0,l-1,count);
        cout<<count;
        int a = l-1;
        int res = (1 << a) - 1;

        return (res+count);
        
    }