#include <bits/stdc++.h>
using namespace std;

int minimumDays(int S, int N, int M) {
        // code here
        if(M > N) return -1;
        if((S >= 7) && (N-M)*6 < M) return -1;
        
        int toatalFood = S*M;
        
        if(toatalFood%N == 0){
            return (toatalFood/N);
        }
        else{
            return ((toatalFood/N)+1);
        }
    }