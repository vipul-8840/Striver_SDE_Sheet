#include <bits/stdc++.h>
using namespace std;

int main ()
{
    // priority_queue<int>pq;
    // pq.push(10);
    // pq.push(20);
    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.size()<<endl;
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(90);
    pq.push(2);
    pq.push(6);
    pq.push(80);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    cout<<pq.size();
    return 0;
}