#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
        int no_of_zeroes = 0;
        int no_of_ones = 0;
        int no_of_twos = 0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                no_of_zeroes++;
            }
            else if(nums[i]==1)
            {
                no_of_ones ++;
            }
            else{
                no_of_twos++;
                
            }
        }
        int i=0;
        int j =0;
        while(i<no_of_zeroes)
        {
            nums[j]=0;
            i++;
            j++;
        }
        i=0;
        while(i<no_of_ones)
        {
            nums[j]=1;
            j++;
            i++;
        }
        i=0;
        while(i<no_of_twos)
        {
            nums[j]=2;
            j++;
            i++;
        }
    }