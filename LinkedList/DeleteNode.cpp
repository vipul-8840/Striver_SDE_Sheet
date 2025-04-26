#include <bits/stdc++.h>
using namespace std;

void deleteNode(ListNode* node)
     {
        ListNode * curr = node;
        ListNode * prev = NULL;
        while(curr->next)
        {
            int temp = curr->val;
            curr->val = curr->next->val;
            curr->next->val = temp;

            prev= curr ;
            curr = curr->next;


        }
        
        delete(curr);
        prev->next = NULL;
        return ;
        
    }
