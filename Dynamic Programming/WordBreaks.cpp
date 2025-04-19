#include<bits/stdc++.h>
using namespace std ;
class Solution {
    public:
        vector<int> dp;  
    
        bool helper(int start, const string& s, unordered_set<string>& dict) {
            if (start == s.length()) return true;
    
            if (dp[start] != -1) return dp[start];
    
            for (int end = start + 1; end <= s.length(); ++end) {
                string word = s.substr(start, end - start);
                if (dict.find(word) != dict.end()) {
                    if (helper(end, s, dict)) {
                        return dp[start] = true;
                    }
                }
            }
    
            return dp[start] = false;
        }
    
        bool wordBreak(string s, vector<string>& wordDict) {
            unordered_set<string> dict(wordDict.begin(), wordDict.end());
            dp = vector<int>(s.length(), -1);
             
            int a = helper(0, s, dict);
            for(int i=0;i<dp.size();i++)
             {
                cout<<dp[i]<<" "<<endl;
             }
             return a ;
        }
    };
    