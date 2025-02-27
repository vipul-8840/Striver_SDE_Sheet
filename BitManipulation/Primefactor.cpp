#include <bits/stdc++.h>
using namespace std;

vector<int>AllPrimeFactors(int N)
	{
	    // Code here
	    if(N==1)
	    {
	        return {};
	    }
	    vector<int>ans;
	     vector<int>res;
	    for(int i=2;i<=N/2;i++)
	    {
	        if(N%i==0)
	        ans.push_back(i);
	        
	    }
	    ans.push_back(N);
	    
	   for(int i= 0;i<ans.size();i++)
	   {
	       int digit = ans[i];
	       int flag = 1;
	       for(int i=2;i*i<=digit;i++)
	       {
	           if(digit%i==0)
	           {
	               flag = 0;
	               break;
	           }
	       }
	       if(flag==1)
	       res.push_back(digit);
	       
	   }
	   return res;
	}
