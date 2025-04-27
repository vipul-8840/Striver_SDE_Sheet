#include <bits/stdc++.h>
using namespace std;


// void reverse(vector<int>&ans,int start,int end)
// {
//     while(start<end)
//     {
//         swap(ans[start],ans[end]);
//         start++;
//         end--;
//     }
// }
// ListNode* reverseKGroup(ListNode* head, int k)
// {
//     if(k==0||k==1||head==NULL)
//     return head;
//      vector<int>ans;
//      ListNode*curr = head;
//      int n = 0;

//      while(curr)
//      {
//          ans.push_back(curr->val);
//          curr = curr->next ;
//          n++;
//      }
//      int revTime = n/k;
//      int j=0;
//      while(j<revTime)
//      {
//         reverse(ans,(j*k),((j*k)+k-1));
//         j++;
//      }
//      ListNode * newHead =  new ListNode(-1);
//       curr = newHead;
//      for(int i=0;i<ans.size();i++)
//      {
//          ListNode * temp = new ListNode(ans[i]);
//          curr->next = temp;
//          curr = curr->next;
//      }
//      return newHead->next;
// }

ListNode* reverseKGroup(ListNode* head, int k) {
        
        
    if(head==nullptr || k==1 || head->next==nullptr)
     return head;
 
 int c=0;
 ListNode* last=head;
 
 while(last!=nullptr)  //to count nodes
 {
     last=last->next;
     c++;
 }
 
 if(k<=c)
 {
     ListNode *prev=nullptr,*curr=head,*nxt=nullptr;
     int count=0;

     while(curr!=nullptr && count<k )
     {
         nxt=curr->next;
         curr->next=prev;
         prev=curr;
         curr=nxt;
         count++;
     }

     if(nxt!=nullptr)
         head->next=reverseKGroup(nxt,k);

     return prev;
 }