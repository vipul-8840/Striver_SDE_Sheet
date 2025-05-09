#include <bits/stdc++.h>
using namespace std;
void heapify(int i,int arr[])
{


    while(i>0 && arr[(i-1)/2]<arr[i])
    { 
        swap(arr[(i-1)/2],arr[i]);
        i = (i-1)/2;

    }
    return ;
}
void print(int arr [])
{
    for(int i=0;i<11;i++)
    {
        cout<<arr[i]<<" ";
    }
}

 int main ()
 {
    int arr[11]= {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};

    for(int i=1;i<11;i++)
    {
        heapify(i,arr);
    }
    print(arr);
    return 0;
 }