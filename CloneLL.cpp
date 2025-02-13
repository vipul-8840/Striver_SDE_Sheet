#include <bits/stdc++.h>
using namespace std;
// m-1 brute force approach to solve to the clone a liked list problem solved 


// Node* copyRandomList(Node* head) 
// {
//     unordered_map<Node*,Node*> m;
//     Node * curr = head;
//     while(curr)
//     {
//         Node * temp = new Node (curr->val);
//         m[curr] = temp;
//     curr = curr->next;

//     }
//     curr = head;
//     while(curr)
//     {
//         Node * temp = m[curr];
//         temp->next = m[curr->next];
//         temp->random = m[curr->random];
//         curr = curr->next;
//     }
//     return m[head];
// }

// m-2 method solved to problem  without using hashmap 

void createNode(Node * head)
    {
          Node * curr = head ;
          while(curr)
          {
            Node* temp = new Node (curr->val);
            temp->next = curr->next ;
            curr->next = temp;
            curr = curr->next->next;
          }
    }
    void RandomPointer (Node * head)
    {
        Node * curr = head;
        while(curr)
        {
            if(curr->random)
            {
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }
    }

   Node * deepCopy(Node*head)
   {
       Node* dummyNode = new Node(-1);
       Node* res = dummyNode;
       Node * curr = head;
       while(curr)
       {
          res->next = curr->next;
          curr->next = curr->next->next;
          curr = curr->next;
          res = res->next ;
       }
       return dummyNode->next;
   }
    Node* copyRandomList(Node* head) {

        createNode(head);
        RandomPointer(head);
        return deepCopy(head);
        
    }


