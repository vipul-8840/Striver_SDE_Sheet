#include <bits/stdc++.h>
using namespace std;

ListNode *detectCycle(ListNode *head) {
    if(head==NULL || head->next==NULL)
    return NULL;
    ListNode * slow = head ;
    ListNode * fast = head;
    bool flag =0;
    while(fast!=NULL && fast->next !=NULL)
    {
          slow= slow->next;
          fast = fast->next->next;
        if(slow==fast)
        {
            flag = 1;
            break;
        }
    }
    if(flag==0)
    return NULL;

    else{
          slow = head;
         
          while(slow!=fast)
          {
            slow=slow->next;
            fast = fast->next;
          }
          return slow;
    }
    
}