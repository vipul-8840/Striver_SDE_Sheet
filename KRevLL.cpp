class Solution {
public:

   ListNode * kthNode(ListNode * curr,int k)
   {
    k = k-1;
    while(curr!=NULL && k>0)
    {
        curr= curr->next;
       k--;
    }
     return curr;

   }
   void Reverse(ListNode * curr)
   { 
            ListNode * prev = NULL;
            while(curr!=NULL)
            {
                ListNode * temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }
            return;
    }
    ListNode* reverseKGroup(ListNode* head, int k)
     {
         ListNode* curr = head;
         ListNode* prevNode =NULL; 
         while(curr!=NULL)
         {
           ListNode* lastNode = kthNode(curr,k);
            if(lastNode==NULL)
             {
                if(prevNode)
                prevNode->next = curr;
                break;
             }
                
                ListNode* NextNode = lastNode->next;
                lastNode->next = NULL;
                Reverse(curr);
                if(curr==head)
                {
                    head = lastNode;
                
                }
                else
                {
                  prevNode->next = lastNode;
                }
            
                prevNode = curr;
                curr = NextNode;
  
         }
         return head;
