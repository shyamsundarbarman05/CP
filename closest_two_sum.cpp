// ✅ Problem: Closest Two Sum
// Input:

// Size of array n

// Target value t

// n sorted elements of the array

// Output:

// The pair of numbers whose sum is closest to the target

// If multiple pairs → print the first found

// Algorithm:

// STEP-1: Initialization
// Read n, t, and the sorted array elements.
// Set two pointers: l = 0, r = n-1.
// Initialize bestSum = INT_MAX, ansL = -1, ansR = -1.

// STEP-2: Two Pointer Loop
// While l < r, calculate current sum s = a[l] + a[r].

// STEP-3: Update Closest Pair
// If abs(t - s) < abs(t - bestSum), then update bestSum = s, store (a[l], a[r]).

// STEP-4: Pointer Movement

// If s < t, increment l.

// Else decrement r.

// STEP-5: Termination
// After loop ends, output the closest pair (ansL, ansR) and bestSum.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;cout<<"Size: ";cin>>n;
    cout<<"Target: ";cin>>t;
    vector<int>a(n);cout<<"Elements (sorted): ";
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0,r=n-1,bestSum=INT_MAX,al=-1,ar=-1;
    while(l<r){
        int s=a[l]+a[r];
        if(abs(t-s)<abs(t-bestSum)){bestSum=s;al=a[l];ar=a[r];}
        if(s<t) l++; else r--;
    }
    cout<<"Closest Pair ("<<al<<","<<ar<<") with Sum="<<bestSum;
}
