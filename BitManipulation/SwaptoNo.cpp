#include<bits/stdc++.h>
using namespace std;

// with help of xor operation 
int main()
{
    int a=5,b=6;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<"Swap two Number is " << a << " "<<b;
    return 0;
}
