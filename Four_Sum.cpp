// ✅ Problem: Four Sum
// Input:

// Size of array n

// Target value t

// n array elements

// Output:

// A quadruplet (a[i], a[j], a[k], a[l]) such that their sum equals the target t.

// If multiple exist, print the first found.

// If none exist, print Not Found.

// Algorithm:

// STEP-1: Initialization
// Read n, t, and array elements.
// Sort the array (for two pointers).

// STEP-2: Outer Loop-1
// Fix the first element at index i (from 0 to n-4).

// STEP-3: Outer Loop-2
// Fix the second element at index j (from i+1 to n-3).

// STEP-4: Two Pointers
// Set l = j+1, r = n-1.
// While l < r:

// Compute s = a[i] + a[j] + a[l] + a[r].

// STEP-5: Check & Move

// If s == t, output (a[i],a[j],a[l],a[r]) and stop.

// If s < t, increment l.

// If s > t, decrement r.

// STEP-6: Termination
// If no quadruplet found after all loops, output Not Found.

// ✅ Compact C++ Code
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;cout<<"Size: ";cin>>n;
    cout<<"Target: ";cin>>t;
    vector<int>a(n);cout<<"Elements: ";
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    bool found=false;
    for(int i=0;i<n-3 && !found;i++){
        for(int j=i+1;j<n-2 && !found;j++){
            int l=j+1,r=n-1;
            while(l<r){
                int s=a[i]+a[j]+a[l]+a[r];
                if(s==t){
                    cout<<"Found ("<<a[i]<<","<<a[j]<<","<<a[l]<<","<<a[r]<<") at "<<i<<","<<j<<","<<l<<","<<r;
                    found=true; break;
                }
                if(s<t) l++; else r--;
            }
        }
    }
    if(!found) cout<<"Not Found";
}
