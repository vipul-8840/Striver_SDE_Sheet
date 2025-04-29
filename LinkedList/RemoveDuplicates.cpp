#include <bits/stdc++.h>
using namespace std;



  struct ListNode {
 int val;
 ListNode *next;
 ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
    public:
        ListNode* deleteDuplicates(ListNode* head)
        {
            if(head==NULL || head->next==NULL)
            return head ;
            ListNode* curr = head;
            ListNode * last = NULL;
            ListNode * prev = NULL;
            while(curr)
            {
                if(last!=NULL && last!=curr && curr->val == last->val)
                {
                     if(last==head)
                     {
                        ListNode* temp = curr->next;
                        while(temp!=NULL && temp->val==curr->val)
                        {
                            temp = temp->next;
                        }
                        head = temp;
                        curr->next = NULL;
                        curr = temp;
                     }
                     else{
                        ListNode* temp = curr->next;
                        while(temp!=NULL && temp->val==curr->val)
                        {
                            temp = temp->next;
                        }
                         prev->next = temp;
                         curr->next = NULL;
                         curr = temp;
                         last = curr ;
                     }
                }
                else{
                      if(last==NULL ||curr==last)
                      {
                           last = curr ;
                           curr = curr->next;
                      }
                     
                      else{
                           prev = last ;
                           last = curr ;
                           curr = curr->next;
                      }
                }
            }
            return head;
        }
    };