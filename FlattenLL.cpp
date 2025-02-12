#include <bits/stdc++.h>
using namespace std;
// m-1 for solving the problem || brute force approach
Node *flatten(Node *root)
    {
        // Your code here
        if(root==NULL || root->next==NULL)
         return root;
        Node * curr = root;
        vector<int>ans;
        while(curr)
        {
            Node* temp = curr;
            while(temp)
            {
                ans.push_back(temp->data);
                temp = temp ->bottom;
                
            }
            curr = curr->next;
            
        }
        
        sort(ans.begin(),ans.end());
        
        Node* newhead = new Node(ans[0]);
         curr = newhead;
        for(int i=1;i<ans.size();i++)
        {
            Node* temp = new Node(ans[i]);
            curr->bottom= temp;
            curr = temp;
            
        }
        
      return newhead;
    }
