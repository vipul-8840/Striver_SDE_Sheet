#include <bits/stdc++.h>
using namespace std;


void reverse(vector<int>& arr , int low, int high)
{
   if(low>=high)
   return ;
   swap(arr[low],arr[high]);
   reverse(arr,low+1,high-1);
}
 void reverseArray(vector<int> &arr)
 {
     // code here
     
     int low = 0;
     int high = arr.size()-1;
     reverse(arr,low,high);
 }
