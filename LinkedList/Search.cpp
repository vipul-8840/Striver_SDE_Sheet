#include <bits/stdc++.h>
using namespace std;

bool searchKey(int n, Node* head, int key) {
    // Code here
    Node * curr = head;
    while(curr)
    {
         if(curr->data==key)
         return true;
         
         curr=curr->next;
    }
    return false;
}