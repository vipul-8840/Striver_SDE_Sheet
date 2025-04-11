#include<bits/stdc++.h>
using namespace std ;

// int find(vector<int>&arr,int index,vector<int>&dp)
// {
//    if(index==0)
//    return 0;
//    if(dp[index]!=-1)
//     return dp[index];
//    int l = find(arr,index-1,dp) + abs(arr[index]-arr[index-1]);
//    int r = INT_MAX;
//    if(index>1)
//    r = find(arr,index-2,dp) + abs(arr[index]-arr[index-2]);

//    return dp[index]= min(l,r);
// }

// int main ()
// {
//     int n ;
//     cout<<"Enter the size of the array : ";
//     cin>>n;
//     vector<int>arr(n);
//     cout<<"Enter the element in array : ";
//     vector<int>dp(n,-1);
//     for(int i=0;i<n;i++)
//     { 
//         cin>>arr[i];
//     }
//      cout<<"minium energy required to reach last index : "<<find(arr,n-1,dp);
//      return 0;

// }

//tabulation method to solve this problem
// int main ()
// {
//     int n ;
//     cout<<"Enter the size of the array : ";
//     cin>>n;
//     vector<int>arr(n);
//     cout<<"Enter the element in array : ";
//     vector<int>dp(n,-1);
//     dp[0]=0;
//     for(int i=0;i<n;i++)
//     { 
//                 cin>>arr[i];
//     }
//     for(int i=1;i<=n-1;i++)
//     {
//        int l=dp[i-1]+abs(arr[i]-arr[i-1]);
//        int r = INT_MAX;
//         if(i>1)
//         r = dp[i-2]+abs(arr[i]-arr[i-2]);

//         dp[i]=min(l,r);


//     }
//     cout<<"minium energy required to reach last index : "<<dp[n-1];

    
// }


