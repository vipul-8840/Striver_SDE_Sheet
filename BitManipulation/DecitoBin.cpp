#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int deci;
    cout<<"Enter the decimail No :";
    cin>>deci;
    int number = 0;
    int i =0;
    while(deci)
    {
        int digit = deci % 2;
        number = digit*pow(10,i) + number;
        deci = deci>>1;
        cout<<deci<<endl;
        i++;
        
    }
  cout<<"the binary number is : " << number <<endl;
  return 0;
}
