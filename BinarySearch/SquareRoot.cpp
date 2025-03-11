#include<bits/stdc++.h>
using namespace std;

int floorSqrt(int n) {
    // Initialize start and end for binary search
    int start = 1;
    int end = n;
    int ans = 1;

    // Perform binary search
    while(start <= end) {
        int mid = start + (end - start) / 2;

        // Check if mid*mid is less than or equal to n
        if(mid * mid <= n) {
            ans = mid; // Update answer
            start = mid + 1; // Move to the right half
        } else {
            end = mid - 1; // Move to the left half
        }
    }
    return ans; // Return the floor value of the square root
}