#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[],int n , int largest)
{
 
    while(largest <=n)
    {
        int index = largest ;
        int left = 2*index +1;
        int right = 2*index + 2 ;
        if(left<n && arr[left ]>arr[index])
        {
           index = left;
        }
        if(right <n && arr[right]>arr[index])
        {
           index = right;
        }
        if(largest != index)
        {
            swap(arr[largest],arr[index]);
            largest = index;
        }
        else{
            break;
        }

    }

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
    int arr[11] = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};

    for(int i=(11/2 -1);i>=0;i--)
    {
        heapify(arr,11,i);
    }
    print(arr);
    return 0;
}