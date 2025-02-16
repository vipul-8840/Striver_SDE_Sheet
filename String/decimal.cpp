#include <bits/stdc++.h>
using namespace std;

bool isdigit(char digit )
{
    if(digit>='0' && digit<='9')
    {
        return true;
    }
    return 0;
}

int convert_To_decimal(string s,int b)
{
    int n = s.size();
    int decimal_value=0;

    for(int i=0;i<n;i++)
    {
       char digit = s[n-1-i];
        int value ;
        if(isdigit(digit))
        {
             value = digit -'0';
        }
        else
        {
            value = digit - 'A' + 10;
        }


        decimal_value+= value * pow(b,i);
    }

    return decimal_value;


  
}

int main() {
    string num;
    int base;
    
    cout<<"Enter Number : ";
    cin>>num;
    cout<<"Enter Base : ";
    cin>>base;
    cout<<convert_To_decimal(num,base)<<endl;
    return 0;
}
