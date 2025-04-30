#include <bits/stdc++.h>
using namespace std;

// class MinStack {
//     public:
//         stack<pair<int,int>> st;
//         MinStack() 
//         {
              
//         }
        
//         void push(int val) {
    
//             if(st.empty())
//             {
//                 st.push({val,val});
//             }
//             else{
//                  int mini = min(st.top().second,val);
//                  st.push({val,mini});
//             }
            
//         }
        
//         void pop() {
//             st.pop();
            
//         }
        
//         int top() {
            
//             auto it = st.top();
//             return it.first ;
//         }
        
//         int getMin() {
//               auto it = st.top();
//             return it.second ;
//         }
//     };
    
