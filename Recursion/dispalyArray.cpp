#include<bits/stdc++.h>
using namespace std ;
void print(vector<int>&arr,int index)
{
    if(index==arr.size())
    return ;
    cout<<arr[index]<<" ";
    print(arr,index+1);
}
int main ()
{ 
    int n ;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    print(arr,0);
    return 0;

}