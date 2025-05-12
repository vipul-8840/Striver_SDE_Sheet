#include <bits/stdc++.h>
using namespace std;

 bool lemonadeChange(vector<int>& bills)
     {
        
        int fives = 0;
        int tens = 0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
            fives++;
            else{
                if(bills[i]==10)
                {
                    tens++;
                    if(fives==0)
                    return 0;

                    fives--;
                     
                }
                else{
                      if(tens>0 && fives>0)
                      {
                          tens--;
                          fives--;
                      }
                      else if (fives>=3)
                      {
                        fives-=3;
                      }
                      else{
                          return 0;
                      }
                }
            }
        }
        return 1;
    }