/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode * Reverse(ListNode * head)
    {
        ListNode * prev = NULL;
        while(head!=NULL)
        {   ListNode * temp = head->next;
            head->next=prev;
            prev = head;
            head = temp;
            
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       head = Reverse(head);
       int count =1;
        ListNode * curr = head;     
        ListNode * prev = NULL;
       while(count<n && curr!=NULL )
       {
            count++;
            prev = curr;
            curr=curr->next;
       }
       if(n==1)
       {
          head = head->next;
          delete(curr);
          head = Reverse(head);
          return head;
       }
       if(curr->next == NULL)
       {
          delete(curr);
          prev->next = NULL;
           head = Reverse(head);
            return head;
       }
        prev->next = curr->next;
         return  Reverse(head);

    }
};