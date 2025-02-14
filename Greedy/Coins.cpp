
// find minimum coins required to formed total amount = 52
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n = 5;
   int arr[]= {5,2,1,10,6};
   cout<<"Enter the Amount: ";
    int total;
    cin>>total;
   int res = 0;
   sort(arr,arr+n);
   for(int i=4;i>=0;i--)
   {

       if(arr[i]<=total)
       {
             res+= total/arr[i];
             total = total % arr[i];
       }

     
   }
   cout<<"Minium No Of Coins: "<<res<<endl;
   return 0;
}
