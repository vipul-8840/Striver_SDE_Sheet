#include <bits/stdc++.h>
using namespace std;

void print(vector<int>&ans,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return ;
}
int main ()
{
    // vector<int> arr = {4, 8, 5, 2, 25};
    vector<int> arr    = {13, 7, 6, 12};
    int n = arr.size();
    vector<int>ans(n);
    stack<int>st;
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && st.top()>=arr[i])
        {
            st.pop();
        }
        if(st.empty())
        ans[i]=-1;
        else{
            ans[i]=st.top();
        }

        st.push(arr[i]);
    }
    print(ans,n);
    return 0;
}
