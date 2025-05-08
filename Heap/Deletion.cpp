#include <bits/stdc++.h>
using namespace std;

class MaxHeap{
    public:
    int size;
    int * arr;
    int total_size;
    MaxHeap()
    {

    }
    MaxHeap(int n)
    {
        size = 0;
        arr = new int[n];
        total_size=n;
    }
    void insert(int data)
    {
        if(size==total_size)
        {
            cout<<"overflow"<<endl;
            return ;
        }
        arr[size]=data;
        int index = size;
        size++;
        while(index>0 && arr[(index-1)/2]<arr[index])
        {
            swap(arr[(index-1)/2],arr[index]);
            index = (index-1)/2;
        }
        return ;
    }
    void Heapify(int i)
    {
        int largest = i ;
        int left = 2 * i +1;
        int right = 2*i +2;

        if(left<size && arr[left]>arr[largest])
        {
            largest = left;
        }
        if(right<size && arr[right]>arr[largest])
        {
            largest = right;
        }
        if(largest!=i)
        {
            swap(arr[largest],arr[i]);
            Heapify(largest);

        }
        return ;
    }
    void deletes()
    {
        if(size==0)
        {
           cout<<"Empty element"<<endl;
        }
        cout<<arr[0]<<" deleted in the heap"<<endl;
        swap(arr[0],arr[size-1]);
        size--;
        Heapify(0);
    }
    void print()
    {
         for(int i=0;i<size;i++)
         {
            cout<<arr[i]<<" ";
         }
         cout<<endl;
         return ;
    }
};

int main ()
{
    MaxHeap H(10);
    H.insert(7);
    H.insert(15);
    H.insert(45);
    H.insert(90);
    H.deletes();
    H.print();
    H.insert(80);
    H.insert(2);
    H.deletes();
    H.print();
    H.insert(97);
    H.insert(1);
    H.insert(78);
    H.print();
    return 0;
}