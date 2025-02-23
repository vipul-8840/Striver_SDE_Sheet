#include<bits/stdc++.h>
using namespace std ;
int main ()
{
   int n = 13;
   int i;
   cout<<"Set ith Bit : ";
   cin>>i;

   cout<<"ith bit set to 1 n  : " << (n | (1<<i))<<endl;
   return 0;

}