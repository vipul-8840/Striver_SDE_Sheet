#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int bin ;
    cout<<"Enter The Binary No : ";
    cin>>bin;
    int deci = 0;
    int i =0;
    while(bin)
    {
        int digit = bin % 10;
        deci = digit*pow(2,i) + deci;
        i++;
        bin/=10;
    }
    cout<<"The decimal No is : "<<deci<<endl;
    return 0;
}