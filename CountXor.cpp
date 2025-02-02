#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int k =6;
    vector<int> v = {4,2,2,6,4};
    int xors=0,count=0;
    unordered_map<int,int> m;
    m[xors]++;
    for(int i=0;i<v.size();i++)
    {
        xors = xors^v[i];
        int x = xors^k;
        count+=m[x];
        m[xors]++;
    }
    cout<<count<<endl;
    return 0;
}