#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int  repeatNo ,missingNo;
  int arr[]= {1,2,3,3,4};
  int hash[n+1];
  for(int i=0;i<5;i++)
  {
    hash[arr[i]]++;
  }
 
  for(int i=1;i<n+1;i++)
  {
    if(hash[i]==2)
    {
        repeatNo = i;
    }
    if(hash[i]==0)
    {
        missingNo = i;
    }
  }
  
  cout << "Missing Number: " << missingNo << ", Repeating Number: " << repeatNo << endl;
  return 0;
}
