class Solution {
public:
    void deleteNode(ListNode* node)
     {
        ListNode* temp = node;
        temp->val = temp->next->val;
        if(temp->next->next!=NULL)
          {
            temp->next = temp->next->next;
            return;
          }
          temp->next = NULL;

     }
};