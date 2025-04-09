#include<bits/stdc++.h>
using namespace std ;
// Bottom -Up approach to solve this problem 
int main ()
{    int n;
    cout<<"enter the number : ";
    cin>>n;
    int last=1;
    int pre=0 ;
    for(int i=1;i<n;i++)
    {
        int curr = last + pre;
        pre = last;
        last = curr;

    }
   cout<< "fib of n number is : " << last ;
   return 0;
}