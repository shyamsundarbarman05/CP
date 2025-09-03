// Problem: Three Sum
// Input:

// Size of array n

// Target value t

// n sorted elements of the array

// Output:

// A triplet (a[i], a[j], a[k]) such that their sum equals the target t.

// If multiple triplets exist, print the first found.

// If none exists, print Not Found.

// Algorithm:

// STEP-1: Initialization
// Read n, t, and array elements.
// Sort the array (important for two pointers).

// STEP-2: Outer Loop
// Fix the first element at index i (from 0 to n-3).

// STEP-3: Two Pointers
// Set l = i+1, r = n-1.
// While l < r:

// Compute s = a[i] + a[l] + a[r].

// STEP-4: Check & Move

// If s == t, output (a[i],a[l],a[r]) and stop.

// If s < t, increment l.

// If s > t, decrement r.

// STEP-5: Termination
// If no triplet found after all loops, output Not Found.

//✅ Compact C++ Code
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;cout<<"Size: ";cin>>n;
    cout<<"Target: ";cin>>t;
    vector<int>a(n);cout<<"Elements: ";
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    bool found=false;
    for(int i=0;i<n-2 && !found;i++){
        int l=i+1,r=n-1;
        while(l<r){
            int s=a[i]+a[l]+a[r];
            if(s==t){ 
                cout<<"Found ("<<a[i]<<","<<a[l]<<","<<a[r]<<") at "<<i<<","<<l<<","<<r;
                found=true; break;
            }
            if(s<t) l++; else r--;
        }
    }
    if(!found) cout<<"Not Found";
}