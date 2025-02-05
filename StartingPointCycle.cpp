 ListNode *detectCycle(ListNode *head)
     {

        unordered_map<ListNode * ,int> m;
        ListNode * curr = head;
        while(curr!=NULL)
        {
            if(m.find(curr)!=m.end())
               return curr;

               m[curr]++;
               curr=curr->next;

        }
      return NULL;
     }