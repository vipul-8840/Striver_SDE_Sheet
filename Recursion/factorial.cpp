#include <bits/stdc++.h>
using namespace std;
void Factorial_numbers(long long i,int j,long long n, vector<long long> &nums)
{
   if(i>n)
   {
       return;
   }
   nums.push_back(i);
   Factorial_numbers(i*j,j+1,n,nums);
}
vector<long long> factorialNumbers(long long n) {
   
   vector<long long> nums;
   long long i=1;
   int j=2;
   Factorial_numbers(i,j,n,nums);
   return nums;
}