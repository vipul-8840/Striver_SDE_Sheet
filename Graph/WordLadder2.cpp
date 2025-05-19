#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   void dfs(string beginWord,  string endWord ,unordered_map<string,unordered_set<string>>&adj,  vector<vector<string>>&ans, vector<string>&path)
   {
       path.push_back(beginWord);
       if(beginWord==endWord)
       {
          ans.push_back(path);
          path.pop_back();
          return ;
       }

       for(auto it :adj[beginWord])
       {
            dfs(it,endWord,adj,ans,path);
       }
       path.pop_back();
   }
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList)
     {
        int ans =-1;
        unordered_map<string,unordered_set<string>> adj;
       unordered_set<string>s(wordList.begin(),wordList.end());
         unordered_map<string,int> vis;
         queue<string>q;
         vis[beginWord]=0;
         q.push(beginWord);
         while(!q.empty())
         {
            string word = q.front();
            q.pop();
            string temp =word;
            for(int i=0;i<word.size();i++)
            {
                
                for(char ch='a';ch<='z';ch++)
                {
                    if(temp[i]==ch)
                    continue;
                    temp[i]=ch;
                    if(temp==endWord)
                     ans =vis[word]+1;
                    
                    if(s.find(temp)!=s.end())
                    {
                        if(vis.count(temp)==0)
                        {
                            adj[word].insert(temp);
                            vis[temp]=vis[word]+1;
                            q.push(temp);

                        }
                        else if(vis[temp]==vis[word]+1)
                        {
                            adj[word].insert(temp);
                        }
                    }
                }
                temp[i]=word[i];
            }
         }

      if(ans==-1)
      {
        return {};
      }
       vector<vector<string>>res;
       vector<string>path;
       dfs(beginWord,endWord,adj,res,path);
       return res;
        
    }
};