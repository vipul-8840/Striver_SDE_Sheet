ListNode* rotateRight(ListNode* head, int k) 
{
     if(k==0 || head==NULL )
    {
        return head;
    }
    ListNode * curr = head;
    ListNode * prev = NULL;
    int n = 0;
    while(curr)
    {
        n++;
        
        curr = curr->next;
    }
    cout<<n<<endl;
    
    k = k % n;
     if(k==0)
     return head;
    int rem = n-k;
    curr = head;
    int count =0;
    while(count<rem && curr)
    {
        count++;
        prev = curr;
        curr = curr->next;

    } 
    ListNode * temp =  curr;
    while(curr->next)
    {
        curr = curr->next;
    }

    curr ->next = head;
    head = temp;
    prev->next = NULL;
    return head;
   
}