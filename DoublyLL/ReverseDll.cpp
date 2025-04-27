#include <bits/stdc++.h>
using namespace std;

DLLNode* reverseDLL(DLLNode* head) {
    // Your code here
    if(head==NULL || head->next==NULL)
    return head;
    DLLNode * temp = NULL;
    DLLNode * curr = head ;
    
    while(curr)
    {
        DLLNode * nxt = curr->next ;
        curr->next =temp;
        curr->prev = nxt ;
       temp= curr;
        curr =  nxt ;
        
    }
    return temp;
}
