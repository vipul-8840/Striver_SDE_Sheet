#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool find(string s, unordered_set<string>& dict) {
            if (s.empty()) return true;
    
            for (int i = 1; i <= s.length(); ++i) {
                string prefix = s.substr(0, i);
                string suffix = s.substr(i);
    
                if (dict.find(prefix) != dict.end()) {
                    if (find(suffix, dict)) {
                        return true;
                    }
                }
            }
    
            return false;
        }
    
        
          bool wordBreak(string s, vector<string>& wordDict) {
            unordered_set<string> dict(wordDict.begin(), wordDict.end());
            return find(s, dict);
        }
    };
    
