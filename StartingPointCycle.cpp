// first method is hashing technique ways to check cycle detection 

//  ListNode *detectCycle(ListNode *head)
//      {

//         unordered_map<ListNode * ,int> m;
//         ListNode * curr = head;
//         while(curr!=NULL)
//         {
//             if(m.find(curr)!=m.end())
//                return curr;

//                m[curr]++;
//                curr=curr->next;

//         }
//       return NULL;
//      }

// 2nd Method (Tortoise and Hare Algorithm)

 ListNode *detectCycle(ListNode *head)
     {
        ListNode* slow = head;
        ListNode * fast = head;
        if(head==NULL)
         return NULL;

        while(fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            //detect loop
            if(slow==fast)
            {
                slow = head;
                while(slow!=fast)
                {
                    slow=slow->next;
                    fast = fast->next;

                }
                return slow;
            }
        }
        return NULL;
        
     }
};