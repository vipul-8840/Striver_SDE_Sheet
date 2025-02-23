#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n = 15;
    int i ;
    cout <<"clear ith bit : ";
    cin>>i;
    cout<<"clear ith bit set is 0 : " <<(n & ~(1<<i));
    return 0;

}