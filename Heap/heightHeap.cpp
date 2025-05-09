#include <bits/stdc++.h>
using namespace std;

 int heapHeight(int N, int arr[]) 
    {
        // code here
        if(N==1)
        return 1;
        
        int count = 0;
        while(N>1)
        {
            count++;
            N/=2;
        }
        return count ;
        
    }
