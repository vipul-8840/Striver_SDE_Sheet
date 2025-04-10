
#include<bits/stdc++.h>
using namespace std;
 void find(vector<int>&arr,int & target ,int index,int n,int sum,vector<int>&ds)
 {
    if(index>=n)
    {
        if(sum==target)
        {
            for(int i=0;i<ds.size();i++)
            {
                cout<<ds[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }

    ds.push_back(arr[index]);
    find(arr,target,index+1,n,sum+arr[index],ds);
    ds.pop_back();
    find(arr,target,index+1,n,sum,ds);

 }
int main()
{
    int n ;
    cout<<"enter the number in array :  ";
    cin>>n;
    int target;
    cout<<"enter the target : ";
    cin>>target;
    vector<int>arr(n);
    cout<<"Enter the number in array : " ;
    for(int i=0;i<n;i++)
    {
       
        cin>>arr[i];
    }
    vector<int>ds;
    find(arr,target,0,n,0,ds);
}
