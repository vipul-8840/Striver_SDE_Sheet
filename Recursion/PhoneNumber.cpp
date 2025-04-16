#include<bits/stdc++.h>
using namespace std ;

    vector<string> words= {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> find (string digits,int index)
    {
          if(index==digits.size())
          {
              vector<string> ans ;
              ans.push_back("");
              return ans;
          }
          vector<string>ans;
         vector<string>res = find(digits,index+1);
          char ch = digits[index];
         string let = words[ch-'0'];
         for(int i=0;i<res.size();i++)
         {
            for(int j=0;j<let.size();j++)
            {
               ans.push_back(let[j]+res[i]);
            }
         }
         return ans;
    
    }
        vector<string> letterCombinations(string digits)
        {
          
           if(digits.size()==0)
           {
              vector<string> ans;
               return  ans;
           }
    
          vector<string>ans =  find(digits,0);
          return ans;
          
        }
