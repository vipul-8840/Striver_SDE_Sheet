#include <bits/stdc++.h>
using namespace std;

// ListNode* reverseList(ListNode* head) {

//     if(head==NULL || head->next ==NULL)
//     return head;

//     ListNode * prev = NULL;
//     ListNode * curr = head;
//     while(curr)
//     {
//         ListNode * temp = curr->next;
//         curr->next = prev ;
//         prev = curr ;
//         curr = temp;
//     }
//     return prev;

// }
ListNode* reverseList(ListNode* head)
{
   if(head==NULL || head->next==NULL)
   return head ;

   ListNode * newHead = reverseList(head->next);
   ListNode * temp = head->next;
   temp->next = head;
   head->next = NULL;
   return newHead;


}