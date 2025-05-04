#include<bits/stdc++.h>
using namespace std ;
class Solution {
    public:
        vector<int> asteroidCollision(vector<int>& asteroids)
        {
            stack<int> st;
            for(int i=0;i<asteroids.size();i++)
            {
                        if(asteroids[i]>0)
                        {
                            st.push(asteroids[i]);
                        }
                   else{
                 while(!st.empty() && st.top()>0 && st.top()<abs(asteroids[i]))
                            {
                                st.pop();
                            }
                            if(!st.empty() && st.top()>0 && abs(asteroids[i])==st.top())
                            {
                               st.pop();
                               continue;
                            }
                            if(st.empty()|| st.top()<0)
                            {
                                st.push(asteroids[i]);
                            }
                        }
            }  
    
        int n = st.size();
        vector<int>ans(n,0);
        int i = n-1;
        while(!st.empty())
        {
            ans[i]=st.top();
            st.pop();
            i--;
    
        }
        return ans;
        }
        
    };