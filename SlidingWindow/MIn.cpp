class Solution {
    public:
        string minWindow(string s, string t) 
        {
                int n = s.size();
                int m = t.size();
                int mini = n;
                int startIndex = -1;
            for(int i=0;i<n;i++)
            {
                int count=0;
                int hash[128]={0};
                for(int j=0;j<m;j++)
                {
                    hash[t[j]]++;
                  
                }
                for(int j=i;j<n;j++)
                {
                    if(hash[s[j]]>0)
                    {
                        count++;
                    }
                    hash[s[j]]--;
                    if(count==m)
                    {
                        if(j-i+1<mini)
                        {
                            mini = j-i+1;
                            startIndex = i;
    
                        }
                         break;
                    }
                }
            }
    
          
            return (startIndex == -1) ? "" : s.substr(startIndex, mini);
    
        }
    };