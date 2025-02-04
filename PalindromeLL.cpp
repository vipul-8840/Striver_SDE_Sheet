class Solution {
public:
    ListNode * Reverse (ListNode * head)
    {
        ListNode * prev = NULL;
        ListNode * curr = head;
        while(curr!=NULL)
        {
            ListNode * temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;

        }
        return prev;
    }
    bool isPalindrome(ListNode* head)
    {
         ListNode * slow = head;
         ListNode * fast = head;
         while(fast->next && fast->next->next)
         {
            slow = slow->next ;
            fast = fast->next->next;
         } 
         ListNode *  newHead = Reverse(slow->next);
         ListNode * second = newHead;
         ListNode * first = head;
         while(second!=NULL)
         {
            if(first->val!= second->val)
            {
                 return false;
            }
              first=first->next ;
              second = second->next;
         }
         return true;
    }
};