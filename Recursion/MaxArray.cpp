#include <bits/stdc++.h>
using namespace std;
int maxArray(vector<int>&arr,int maxi,int index)
{
    if(index==arr.size())
     return maxi;
     return maxArray(arr,maxi,index+1);
}

int main ()
{ 
    int n ;
    cout<<"Enter the size of the array : ";
    cin>>n;
    
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     int maxi = arr[0];
    cout<<maxArray(arr,maxi,1);
    return 0;

}
