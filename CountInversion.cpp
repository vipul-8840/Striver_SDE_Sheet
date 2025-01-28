#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int arr [5] = {3,2,1,4,6};
    int count =0;

    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            count++;
        }
    }
    cout<<"No of Inversion "<<count<<" ";
    return 0;
}