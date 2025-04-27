#include <bits/stdc++.h>
using namespace std;
class ListNode {
    public:
    int k ;
    int next;
    ListNode (int k)
    {
        this->k = k;
    }
    
};
ListNode* rotateRight(ListNode* head, int k) {
    int n = 0;
    if(head==NULL )
    return head;
    ListNode* curr = head;
    ListNode * pre = NULL;
    while(curr)
    {
         n++;
        pre = curr ;
        curr= curr->next;
    }
    k = k%n;
    if(k==0)
    return head;
    int rem = n-k;
    int count = 0;
    curr = head;
    while(count<(rem-1))
    {
        count++;
        curr = curr->next;
    }
    ListNode* newHead = curr->next;
    curr->next = NULL;
    pre->next = head;
    return newHead;
}