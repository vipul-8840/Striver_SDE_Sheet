#include <bits/stdc++.h>
using namespace std;

ListNode* oddEvenList(ListNode* head) 
{
    
    if(head==NULL || head->next==NULL)
    return head;
    ListNode * oddOne = NULL;
    ListNode * odd = NULL;
    ListNode * even = NULL;
    ListNode * temp = NULL;
    ListNode * curr= head;
    int flag = 0;
    while(curr!=NULL)
    {
        if(flag == 0)
        {
            if(!odd)
            {
                odd = head ;
                oddOne = odd;
                curr = curr->next ;
                odd ->next =NULL;
            }
            else{
                   odd->next = curr ;
                   odd = curr;
                curr = curr->next ;
                   odd->next =NULL;
              }
           
            flag = 1;
        }
        else
        {
                if(even==NULL)
                {
                    even = curr ;
                    temp = even;
                     curr = curr->next ;
                    even->next =NULL;
                   
                }
                else
                {
                        even->next = curr;
                        even = curr;
                         curr = curr->next ;
                        even->next = NULL;

                }
                
                flag = 0;
        }
    
 }
    odd->next = temp;
    return oddOne;
}