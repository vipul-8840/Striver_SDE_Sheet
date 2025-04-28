#include <bits/stdc++.h>
using namespace std;

int countNodesinLoop(Node *head) {
        
    // Code here
     if(head==NULL || head->next==NULL)
    return NULL;
    Node * slow = head ;
   Node * fast = head;
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
    return 0;

    else{
          slow = head;
        
          while(slow!=fast)
          {
            slow=slow->next;
            fast = fast->next;
          }
           Node * newHead = slow ;
            int count =1;
           slow = slow->next;
           while(slow!=newHead)
           {
               count++;
               slow=slow->next;
           }
             return count;
    }
  
}