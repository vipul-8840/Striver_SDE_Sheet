#include <bits/stdc++.h>
using namespace std;

string removeKdigits(string num, int k)
     {
        if(num.size()==k)
        return string(1,'0');
        int count = 0;
         stack<char>st;
         for(int i=0;i<num.size();i++)
         {
            while(!st.empty() && st.top()>num[i] && count<k)
            {
                st.pop();
                count++;
            }
            st.push(num[i]);
         }
         string ans;
          while (!st.empty()  && count<k)
          {
            st.pop();
            count++;
          }

      
      while(!st.empty()) {
            ans += st.top();
            st.pop();
        }

      
        reverse(ans.begin(), ans.end());

        int i = 0;
        while(i < ans.size() && ans[i] == '0') {
            i++;
        }

        ans = ans.substr(i);

        return ans.empty() ? "0" : ans;
    }
