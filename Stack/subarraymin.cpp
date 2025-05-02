#include <bits/stdc++.h>
using namespace std;

vector<int> getNSL(vector<int>& arr)
{      int n = arr.size();
       vector<int>ans(n);
       stack<int>st;
       for(int i=0;i<n;i++)
       {
                while(!st.empty() && arr[st.top()]>=arr[i])
                {
                   st.pop();
                }

                if(st.empty())
                {
                    ans[i]= -1;
                }
                else{

                    ans[i]=st.top();

                }
                st.push(i);

       }
       return ans;
}

vector<int> getNSR(vector<int>&arr)
{
    int n = arr.size();
    vector<int>ans(n);
    stack<int>st;
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && arr[st.top()]>arr[i])
        {
            st.pop();
        }
        if(st.empty())
        {
            ans[i]=n;
        }
        else{
          ans[i]=st.top();
        }
        st.push(i);
    }
    return ans;
}
 void print(vector<int> & temp)
 {
    int n = temp.size();
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";

    }
    cout<<endl;
 }
int sumSubarrayMins(vector<int>& arr)
{
    int n = arr.size();
    long long sum  = 0;
    vector<int> NSL = getNSL(arr);
    vector<int>NSR = getNSR(arr);
    print(NSL);
    print(NSR);
    long long M = 1e9 + 7;
    for(int i=0;i<n;i++)
    {
       long long le = i-NSL[i];
       long long re = NSR[i]-i;

       long long total = le * re;
       long long total_sum = total * arr[i];
       sum = (sum + total_sum)%M;
    }
    return sum ;
}