#include <bits/stdc++.h>
using namespace std;

bool isPossible(int a,int b)
{
    //code here
    if(a==2 && b==2)
    return false;
   if((a%2==0) || (b%2)==0)
   return true;
   
   return false;
}