#include <bits/stdc++.h>
using namespace std;

int xors(int n)
{
    if(n%4==1)
     return 1;
     if(n%4==2)
     return n+1;
     if(n%4==3)
     return 0;
     if(n%4==0)
     return n;
}
  int findXOR(int l, int r) 
  {
    return xors(l-1) ^ xors(r);
  }
