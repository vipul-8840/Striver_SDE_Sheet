#include<bits/stdc++.h>
using namespace std ;
void subsequence(string & s ,int index,vector<string>&ans,string & temp)
{
    if(index==s.size())
    {
        ans.push_back(temp);
        return ;
    }
    subsequence(s,index+1,ans,temp);
    temp+=s[index];
    subsequence(s,index+1,ans,temp);
    temp.pop_back();

}
int main()
{
    string s ;
    cin>>s;
    vector<string>ans;
    string temp="";
    subsequence(s,0,ans,temp);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}

