#include <bits/stdc++.h>
using namespace std;

Node* copyRandomList(Node* head) 
{
    unordered_map<Node*,Node*> m;
    Node * curr = head;
    while(curr)
    {
        Node * temp = new Node (curr->val);
        m[curr] = temp;
    curr = curr->next;

    }
    curr = head;
    while(curr)
    {
        Node * temp = m[curr];
        temp->next = m[curr->next];
        temp->random = m[curr->random];
        curr = curr->next;
    }
    return m[head];
}
