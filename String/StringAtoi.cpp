#include <bits/stdc++.h>
using namespace std;




    int myAtoi(string s) {
        int i = 0, flag = 1, n = s.size();
        long num = 0;  
       
        while (i < n && isspace(s[i])) i++;

        if (i < n && (s[i] == '-' || s[i] == '+')) {
            flag = (s[i] == '-') ? -1 : 1;
            i++;
        }

        
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            if (num > (INT_MAX - digit) / 10) {
                return (flag == 1) ? INT_MAX : INT_MIN;
            }

            num = num * 10 + digit;
            i++;
        }

        return static_cast<int>(num * flag);
    }


