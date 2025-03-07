#include <bits/stdc++.h>
using namespace std;

int check(char C)
{
    if(C =='I')
    return 1;
    else if (C=='V')
    return 5;
    else if (C=='X')
    return 10;
    else if (C=='L')
    return 50;
    else if(C=='C')
    return 100;
    else if(C=='D')
    return 500;
    else if(C=='M')
    return 1000;
    else{
        return 0;
    }
}
int romanToInt(string s) {
    int count = 0;
     count+=check(s[0]);
     for(int i=1;i<s.size();i++)
     {
        int a = check(s[i]);
        int b = check(s[i-1]);

        if(a>b)
        {
            count+=(a-2*b);
        }
        else{
            count+=a;
        }
     }


     return count ;
    
}