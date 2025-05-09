#include <bits/stdc++.h>
using namespace std;

int main ()
{
    priority_queue<int>pq;
    pq.push(10);
    pq.push(20);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.size()<<endl;
    return 0;
}