#include <bits/stdc++.h>
using namespace std;

ListNode* reverseList(ListNode* head) {
        ListNode * prev = NULL;
        while(head!=NULL)
        {
            ListNode * temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;


        }
        
        return prev;
    }