#include<bits/stdc++.h>
using namespace std ;
// Bottom -Up approach to solve this problem 
// int main ()
// {    int n;
//     cout<<"enter the number : ";
//     cin>>n;
//     int last=1;
//     int pre=0 ;
//     for(int i=1;i<n;i++)
//     {
//         int curr = last + pre;
//         pre = last;
//         last = curr;

//     }
//    cout<< "fib of n number is : " << last ;
//    return 0;
// }

int fib(int n,vector<int>&dp)
{
    if(n<=1)
    {
        return n;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    return dp[n]= fib(n-1,dp) + fib(n-2,dp);
}


int main()
{
    int n ;
    cout<<"Enter the number is ";
    cin>>n;
    vector<int>dp(n+1,-1);
  int a =fib(n,dp);
  cout<<a;
  return 0;
}