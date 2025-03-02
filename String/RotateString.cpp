#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public:
        bool rotateString(string s, string goal)
         {
            if(s.size()!=goal.size())
            return 0;
            if(s==goal)
            return 1;
            for(int i=0;i<s.size();i++)
            {
                char  ch = s[0];
                s.erase(s.begin(),s.begin()+1);
                s.push_back(ch);
                if(s==goal)
                return 1;
            }
            return 0;
        }
    };