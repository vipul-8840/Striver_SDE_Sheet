#include <bits/stdc++.h>
using namespace std;

string getSub(string & s ,string & t)
{
    int start = 0;
        int end = 0;
        int k = 0;
        int n = s.size();
        int mini = n;
        int startInd=-1;
        while(end<n)
        {
            if(s[end]==t[k])
            {
                k++;
            }
            if(k==t.size())
            {
                start = end;
                k = k-1;
                while(start>=0 && k>=0)
                {
                    if(s[start]==t[k])
                    k--;
                    
                     start--;
                }
                start++;
                if(end-start+1<mini)
                {
                    mini = end-start+1;
                    startInd = start;
                }
                k=0; end = start;
            }
            end++;
        }
       return startInd==-1 ? "":s.substr(startInd,mini);
}
