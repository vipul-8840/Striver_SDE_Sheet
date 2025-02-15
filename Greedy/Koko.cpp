#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n = 4;
//    int arr [] ={3,6,7,11 };
//    int H = 8;
//    int sum = 0;
//   for(int i=0;i<n;i++)
//   {
//     sum+=arr[i];
//   }
//   int h = 0;
//   for(int i=1;i<H;i++)
//   {
//       h = sum/i;
//       if(h<=H)
//       {
//         h = i;
//         break;
//       }
//   }
//    cout<<h<<endl;
//     return 0;
// }

int main()
{
    int n = 4;
   int arr [] ={3,6,7,11 };
   int H = 8;
   int start = 0;
   int end = H;
      int sum = 0;
  for(int i=0;i<n;i++)
  {
    sum+=arr[i];
  }
  int ans = 0;
   while(start<=end)
   {
     int mid = start + (end-start)/2;
      int a = sum/mid;
     if(a<=H)
        {  
             ans = mid;
             end = mid-1;
        }
     else {
        start = mid +1;
     }
   }
   cout<<ans<<endl;
   return 0;
}