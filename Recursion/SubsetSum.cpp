#include<bits/stdc++.h>
using namespace std ;
 int main ()
 {
    int n ;
    cout<<" Enter the size of the array is : "<<endl;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            cout<<sum<<" "; 
        }
    }
    return 0;
 }