class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      int count =0;
      ListNode* Head = NULL;
      ListNode* curr = NULL;
      while(l1!=NULL || l2!=NULL || count!=0)
      {
          int sum=count;

          if(l1!=NULL)
          {
             sum+=l1->val;
             l1 = l1->next;
          }
          if(l2!=NULL)
          {
            sum+=l2->val;
            l2 = l2->next;
          }
          

           if(Head==NULL)
           {
              ListNode * temp = new ListNode(sum%10);
              Head = temp;
              curr = Head;
              count = sum/10;
              continue;

           }
          
            ListNode * temp = new ListNode(sum%10);
            curr->next = temp;
            curr = temp;
            count = sum/10;

      }
      return Head;
        
    }
};