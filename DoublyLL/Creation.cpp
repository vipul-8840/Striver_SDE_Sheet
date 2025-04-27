#include <bits/stdc++.h>
using namespace std;



class Node {
    public:
    int data ;
    Node * next ;
    Node * prev ;
   Node()
   {

   }
    Node(int data)
    {
        this->data = data ;
        next = nullptr;
        prev = nullptr;
    }
    
};

void print(Node * curr)
    {
        while(curr)
        {
            cout<<curr->data<<" ";
           curr = curr->prev;
        }
        return;
    }
int main()
{
    vector<int> arr ={2,4,5,6};
     Node * head = new Node(arr[0]);
     Node * curr = head ;
     for(int i=1;i<=3;i++)
     {
           Node * temp = new Node(arr[i]);
           temp->prev = curr;
           curr->next = temp;
           curr = temp;
     }
     print(curr);
     return 0;

}