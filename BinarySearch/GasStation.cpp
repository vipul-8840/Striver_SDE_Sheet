#include <bits/stdc++.h>
using namespace std;

// Brute force approach problem 
// double findSmallestMaxDist(vector<int> &arr, int k) 
// {
//     // Code here
//     int n = arr.size();
//     vector<int>number(n-1,0);

    
//     for(int i=1;i<=k;i++)
//     {
//            double maxiDist = -1;
//            int index = -1;
//           for(int j=0;j<n-1;j++)
//           {
//               double diff = (arr[j+1]-arr[j]);
//               double dist = diff/(double)(number[j]+1);
//               if(dist>maxiDist)
//               {
//                   maxiDist=dist;
//                   index=j;
//               }
//           }
          
//           number[index]++;
//     }
    
//        double maxiDist = -1;
   
//     for(int i=0;i<n-1;i++)
//     {
//         double diff = (arr[i+1]-arr[i]);
//         double dist = diff/(double)(number[i]+1);
//         maxiDist = max(maxiDist,dist);
//     }
//    return maxiDist ;
// }



// priority queue method 
double findSmallestMaxDist(vector<int> &stations, int k) {
    int n = stations.size();
    vector<int> num(n - 1, 0);
    priority_queue<pair<long double, int>> pq;  
    for (int i = 0; i < n - 1; i++) {
        pq.push({(long double)(stations[i + 1] - stations[i]), i});
    }

    for (int i = 1; i <= k; i++) {
        auto diff = pq.top();
        pq.pop();
        int index = diff.second;
        num[index]++;
        long double maxDiff = ((long double)stations[index + 1] - (long double)stations[index]) / (num[index] + 1);
        pq.push({maxDiff, index});
    }

    double result = pq.top().first;

   
    result = round(result * 100.0) / 100.0;

    return result;
}


//bianry search method O(klogn)
int checkPossible(vector<int> &stations, long double mid)
{
    int count= 0;
     for(int i=1;i<stations.size();i++)
     {
         int num = (stations[i]-stations[i-1])/mid;
         if((stations[i]-stations[i-1])*num==stations[i])
         {
             num--;
         }
         count+=num;
     }
     return count;
}
double findSmallestMaxDist(vector<int> &stations, int k) {
    // Code here
   long double low = 0;
    long double high = 0;
    for(int i=1;i<stations.size();i++)
    {
        high = max(high,(long double)(stations[i]-stations[i-1]));
    }
    long double diff = 1e-6 ;
    while((high-low)>diff)
    {
        long double mid = (low+high)/2.0;
        int count = checkPossible(stations,mid);
        if(count>k)
        {
            low= mid;
        }
        else{
          
            high = mid;
        }
        
        
    }
    return high;
}