#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;cout<<"Size: ";cin>>n;
    cout<<"Target: ";cin>>t;
    vector<int>a(n);cout<<"Elements (sorted): ";
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0,r=n-1;
    while(l<r){
        int s=a[l]+a[r];
        if(s==t){cout<<"Found ("<<a[l]<<","<<a[r]<<")";return 0;}
        if(s<t) l++; else r--;
    }
    cout<<"Not Found";
}
// ✅ Problem: Two Sum in Sorted Array
// Input:

// Size of array n

// Target value t

// n sorted elements of the array

// Output:

// The pair of numbers whose sum equals target

// If no such pair exists → print “Not Found”

// Algorithm:

// STEP-1: Initialization
// Read n, t, and the sorted array elements.
// Set two pointers: l = 0 (first index), r = n-1 (last index).

// STEP-2: Two Pointer Loop
// Enter a while loop that continues as long as l < r.

// STEP-3: Sum Calculation
// Compute s = a[l] + a[r].

// STEP-4: Equality Check
// If s == t, then output the pair (a[l], a[r]) and stop.

// STEP-5: Adjusting Left Pointer
// If s < t, increment l.

// STEP-6: Adjusting Right Pointer
// If s > t, decrement r.

// STEP-7: Termination
// If loop ends without finding a pair, output “Not Found”.