#include <bits/stdc++.h>
using namespace std;

ListNode* deleteMiddle(ListNode* head) {
    if(head==NULL || head->next==NULL)
    return  NULL;
    ListNode * slow = head ;
    ListNode * fast = head ;
    ListNode * prev = NULL;
    while(fast && fast->next)
    {
        prev = slow ;
        slow=slow->next;
        fast = fast->next->next;
    }
    if(!slow->next)
    {
        prev->next = NULL;
        delete(slow);
        return head;
    }
   else
    {
         prev->next = slow->next ;
       delete(slow);
       return head;

    }
   
    return head ;
    
}