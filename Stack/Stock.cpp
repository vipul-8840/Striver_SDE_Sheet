#include <bits/stdc++.h>
using namespace std;

// class StockSpanner
//  {
    
//         public:
//        vector<int>arr;
//             StockSpanner() 
//             {
                
//             }
            
//             int next(int price) {
//                 arr.push_back(price);
//                int  count = 1;

//                 for(int i = arr.size()-2;i>=0;i--)
//                 {
//                       if(arr[i]<=price)
//                       {
//                         count++;

//                       }
//                       else
//                       break;
//                 }
//                 return count;

//             }
// };

stack<pair<int,int>>st;
int index =-1;
StockSpanner() {

   
}

int next(int price) {
        if(!st.empty())
   cout<<st.top().second<<" ";
   index = index + 1;
   while(!st.empty() && st.top().first <=price)
   {
       st.pop();
   }
 
   int res = index - (st.empty()?-1:st.top().second);
   st.push({price,index});
   return res;

   
}