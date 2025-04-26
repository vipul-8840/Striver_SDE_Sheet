#include <bits/stdc++.h>
using namespace std;

int getCount(struct Node* head) {

    // Code here
    int count = 0;
    Node * curr = head ;
    while(curr)
    {
        count++;
        curr = curr->next;
    }
    return count;
    
}
