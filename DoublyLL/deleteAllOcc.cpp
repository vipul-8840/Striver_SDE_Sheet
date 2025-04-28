#include<bits/stdc++.h>
using namespace std ;

void deleteAllOccurOfX(struct Node** head, int x)
{
    // Write your code here
  struct Node* temp = *head;

while (temp)
{
    if (temp->data == x)
    {
        if (temp == *head)
            *head = temp->next;
        
        if (temp->next)
            temp->next->prev = temp->prev;
        
        if (temp->prev)
            temp->prev->next = temp->next;
        
        struct Node* toDelete = temp;
        temp = temp->next;
        free(toDelete);
    }
    else
    {
        temp = temp->next;
    }
    
}
}