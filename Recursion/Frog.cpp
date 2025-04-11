#include<bits/stdc++.h>
using namespace std ;

 int find(vector<int>&arr,int index)
 {
    if(index==0)
    return 0;
    int l = find(arr,index-1) + abs(arr[index]-arr[index-1]);
    int r = INT_MAX;
    if(index>1)
    r = find(arr,index-2) + abs(arr[index]-arr[index-2]);

    return min(l,r);
 }
int main ()
{
    int n ;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the element in array : ";
    for(int i=0;i<n;i++)
    { 
        cin>>arr[i];
    }
     cout<<"minium energy required to reach last index : "<<find(arr,n-1);
     return 0;

}