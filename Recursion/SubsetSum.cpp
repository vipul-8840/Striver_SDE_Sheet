#include<bits/stdc++.h>
using namespace std ;
//  int main ()
//  {
//     int n ;
//     cout<<" Enter the size of the array is : "<<endl;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++)
//     {
//         int sum = 0;
//         for(int j=i;j<n;j++)
//         {
//             sum+=arr[j];
//             cout<<sum<<" "; 
//         }
//     }
//     return 0;
//  }
 void find(vector<int>&arr,int index,int sum ,int n)
 {
    if(index==n)
    {
        cout<<sum<<" ";
        return ;
    }

    find(arr,index+1,sum+arr[index],n);
    find(arr,index+1,sum,n);
 }
 int main ()
 {
    int n ;
    cout<<" Enter the size of the array is : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

     find (arr,0,0,n);
}