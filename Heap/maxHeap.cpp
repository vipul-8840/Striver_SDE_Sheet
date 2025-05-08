#include <bits/stdc++.h>
using namespace std;

class MaxHeap{
    public:
      int size;
      int * arr ;
      int  total_size ;
    MaxHeap()
    {

    }
    MaxHeap(int n)
    {
        total_size=6;
        size = 0;
        arr = new int[6];
    }

    void insert(int data)
    {
        if(size==total_size){
            cout<<"Overflow"<<endl;
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
    void print()
    {
         for(int i=0;i<size;i++)
         {
            cout<<arr[i]<<" ";
         }
         return ;
    }
    
};

int main ()
{
    MaxHeap H(10) ;
    H.insert(7);
    H.insert(15);
    H.insert(45);
    H.insert(90);
    H.insert(80);
    H.insert(2);
    H.insert(97);
    H.insert(1);
    H.print();
    return 0;
};
