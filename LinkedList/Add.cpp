#include <bits/stdc++.h>
using namespace std;

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
     {
        int count = 0;
        ListNode * newHead = new ListNode(-1);
        ListNode* dummy = newHead;

        while(l1!=NULL || l2!=NULL || count!=0)
        {
            int a=0 ,b=0;
            if(l1!=NULL)
            {
                 a = l1->val;
                 l1 = l1->next;
            }
            if(l2!=NULL)
            {
                b = l2->val;
                l2 = l2->next;

            }
            int data = a + b + count;
            ListNode * temp = new ListNode(data % 10);
            dummy->next = temp;
            dummy=temp;
            count = data / 10;
            
        }
        return newHead->next;
    }
