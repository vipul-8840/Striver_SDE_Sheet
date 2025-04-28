#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
{
    // code here
    vector<pair<int,int>> ans;
    Node * curr = head;
    while(curr->next)
    {
        curr = curr->next;
    }
    
    if(curr==head)
    return ans;
    
    while(head != curr && head->prev != curr)
    
    {
        int a = head->data + curr->data ;
        if(a == target)
        {
            ans.push_back({head->data,curr->data});
            head = head->next;
            curr = curr->prev;
        }
        else if(a>target)
        {
            curr = curr->prev ;
        }
        else{
            head = head->next;
        }
    }
    return ans;
    
}