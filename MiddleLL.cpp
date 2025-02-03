ListNode* middleNode(ListNode* head) {
        ListNode * curr = head;
        int count =0 ;
        while(curr!=NULL)
        {
            count++;
            curr = curr->next;
        }
        
        cout<<count<<endl;
        int mid = (count/2);
        curr = head;
        count =0 ;
        while(curr!=NULL && count<mid)
        {
            curr = curr->next;
            count++;
        }

        return curr;
    }