#include<bits/stdc++.h>
using namespace std ;
int lastIndex(vector<int>&arr,int index,int target)
{
    if(index<0)
    return -1;
    if(arr[index]==target)
    {
        // cout<<"index"<<endl;
        return index;
    }
    
   return  lastIndex(arr,index-1,target);
}
int main ()
{
    int n ;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int>arr(n,0);
    int target;
    
    cout<<"Enter the target : ";
    cin>>target;
    for(int i=0;i<n;i++)
    {
         cin>>arr[i];
    }
     cout<<lastIndex(arr,n-1,target);

     return 0;
}