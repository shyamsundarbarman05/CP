#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;cout<<"Size: ";cin>>n;
    cout<<"Target: ";cin>>t;
    vector<int>a(n);cout<<"Elements: ";
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0,r=n-1;
    while(l<r){
        int s=a[l]+a[r];
        if(s==t){cout<<"Found ("<<a[l]<<","<<a[r]<<") at "<<l<<","<<r;return 0;}
        if(s<t) l++; else r--;
    }
    cout<<"Not Found";
}

// Problem: Two Sum using Two Pointers
// Input:

// Size of array n

// Target value t

// n elements of the array

// Output:

// The pair of numbers whose sum equals target

// If no such pair exists → print “Not Found”

// Algorithm:

// STEP-1: Initialization
// Read n, t, and array elements.
// Sort the array in non-decreasing order.
// Set two pointers: l = 0 (left), r = n-1 (right).

// STEP-2: Two Pointer Loop
// Enter a while loop that continues as long as l < r.
// // This loop progressively narrows the range to search for the target sum.

// STEP-3: Sum Calculation
// In each iteration, calculate s = a[l] + a[r].

// STEP-4: Equality Check
// If s == t, then the required pair is found.
// Output the pair (a[l], a[r]) and stop.

// STEP-5: Adjusting Left Pointer
// If s < t, increment l by 1.
// // This increases the sum by moving to a larger element.

// STEP-6: Adjusting Right Pointer
// If s > t, decrement r by 1.
// // This decreases the sum by moving to a smaller element.

// STEP-7: Termination
// If loop ends without finding a pair, output “Not Found”.