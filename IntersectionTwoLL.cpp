  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         set<ListNode*>s;
         ListNode * curr = headA;
         while(curr)
         {
            s.insert(curr);
            curr = curr->next;
         }
         curr = headB;
         while(curr)
         {
            if(s.find(curr)!=s.end())
            return curr;
            curr=curr->next;
         }
         return NULL;
    }