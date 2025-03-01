#include<bits/stdc++.h>
using namespace std ;
// Approach  1 to solved the problem

// string reverseWords(string s) 
//     {
//         vector<string> v;
//         string temp="" ;
//         for(int i=0;i<s.size();i++)
//         {
//             if(s[i]==' ')
//             {
//                 if(!temp.empty())
//                 { 
//                     v.push_back(temp);
//                    temp = "";
//                  }
//             }else
//             temp.push_back(s[i]);
//         }
//           if(!temp.empty())
//                 { 
//                     v.push_back(temp);
//                  }
//         reverse(v.begin(),v.end());
//         string ans="";
//         for(int i=0;i<v.size();i++)
//         {
//               ans += v[i]; 
//               if (i != v.size() - 1) ans += " "; 
//         }
//         return ans;
//     }



string reverseWords(string s) {
    reverse(s.begin(), s.end());
    int n = s.size();
    int left = 0;
    int right = 0;
    int i = 0;
    while (i < n) {
        while (i < n && s[i] == ' ')
            i++;
        if (i == n)
            break;
        while (i < n && s[i] != ' ') {
            s[right++] = s[i++];
        }
        reverse(s.begin() + left, s.begin() + right);
        s[right++] = ' ';
        left = right;
        i++;
    }
    s.resize(right - 1);
    return s;
}