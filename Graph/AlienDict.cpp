#include <bits/stdc++.h>
using namespace std;

string findOrder(vector<string> &words) 
{
    set<char> s;

    for (int i = 0; i < words.size(); i++) {
        string s1 = words[i];
        for (int j = 0; j < s1.size(); j++) {
            s.insert(s1[j]);
        }
    }

    int n = s.size();
    vector<int> adj[26];
    int indegree[26] = {0};

    for (int i = 0; i < words.size() - 1; i++) {
        string s1 = words[i];
        string s2 = words[i + 1];
        int flag = 0;
        int j = 0;

        while (j < s1.size() && j < s2.size()) {
            if (s1[j] != s2[j]) {
                flag = 1;
                adj[s1[j] - 'a'].push_back(s2[j] - 'a');
                indegree[s2[j] - 'a']++;
                break;
            }
            j++;
        }

        if (!flag && s1.size() > s2.size())
            return "";
    }

    queue<int> q;

    for (char c : s) {
        if (indegree[c - 'a'] == 0) {
            q.push(c - 'a');
        }
    }

    vector<int> topo;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        topo.push_back(node);

        for (auto it : adj[node]) {
            indegree[it]--;
            if (indegree[it] == 0) {
                q.push(it);
            }
        }
    }

    if (topo.size() != s.size())
        return "";

    string ans = "";
    for (auto it : topo) {
        ans += char(it + 'a');
    }

    return ans;
}
