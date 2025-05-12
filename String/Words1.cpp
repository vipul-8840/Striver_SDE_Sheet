#include<bits/stdc++.h>
using namespace std ;

int main()
{
    
    int t ;
    cin>>t;
    cin.ignore();
    vector<string> s(t);
    for(int i=0;i<t;i++)
    {
         getline(cin,s[i]);
    }
    
    for(int i=0;i<t;i++)
    {
         int n = s[i].size();
        if(n<=10)
        {
            cout<<s[i]<<endl;
        }
        
        else{
          
            string s1 = s[i];
            string temp = s1[0] + to_string(n - 2) + s1[n - 1];
            
              cout<<temp<<endl;
            }
    }
    return 0 ;
}