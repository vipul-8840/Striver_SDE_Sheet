#include <bits/stdc++.h>
using namespace std;
// m-1 for solving the problem || brute force approach
// Node *flatten(Node *root)
//     {
//         // Your code here
//         if(root==NULL || root->next==NULL)
//          return root;
//         Node * curr = root;
//         vector<int>ans;
//         while(curr)
//         {
//             Node* temp = curr;
//             while(temp)
//             {
//                 ans.push_back(temp->data);
//                 temp = temp ->bottom;
                
//             }
//             curr = curr->next;
            
//         }
        
//         sort(ans.begin(),ans.end());
        
//         Node* newhead = new Node(ans[0]);
//          curr = newhead;
//         for(int i=1;i<ans.size();i++)
//         {
//             Node* temp = new Node(ans[i]);
//             curr->bottom= temp;
//             curr = temp;
            
//         }
        
//       return newhead;
//     }//


//m-2 recursive approach to solve the problem of flatten linked list 

Node * mergeSort(Node * curr1 , Node  * curr2)
{
    
    Node * temp1 = curr1;
    Node * temp2 = curr2;
    Node * dummyNode = new Node(-1);
    Node * curr = dummyNode;
    while(temp1 && temp2)
    {
        if(temp1->data <=temp2->data)
        {
            curr->bottom = temp1;
            curr = temp1;
            temp1 = temp1->bottom;
            
        }
        else{
            curr->bottom = temp2;
            curr = temp2;
            temp2 = temp2->bottom;
        }
    }
    
    if(temp1)
    {
        curr->bottom = temp1;
    }
    if(temp2)
    {
        curr->bottom = temp2;
    }
    
    return dummyNode->bottom;
    
    
}
Node *  Merge (Node * head )
{
    if(head==NULL  || head->next==NULL)
    return head;
    
    Node * mergeHead = Merge(head->next);
      return mergeSort(head,mergeHead);
}


Node *flatten(Node *root) {
    // Your code here4
   if(root==NULL || root->next==NULL)
   return root;
  return  Merge(root);
   
    
    
    
    
    
    
    
}