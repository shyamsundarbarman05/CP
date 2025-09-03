// ✅ Problem: Trapping Rain Water
// Input:

// Size of array n

// Heights of the bars (array of size n)

// Output:

// Total units of water trapped between the bars.

// Algorithm:

// STEP-1: Initialization
// Read n and the array h[].
// Set two pointers: l = 0, r = n-1.
// Initialize leftMax = 0, rightMax = 0, water = 0.

// STEP-2: Loop Condition
// While l <= r:

// STEP-3: Compare Heights

// If h[l] <= h[r]:

// If h[l] >= leftMax → update leftMax = h[l].

// Else → add leftMax - h[l] to water.

// Move l++.

// Else:

// If h[r] >= rightMax → update rightMax = h[r].

// Else → add rightMax - h[r] to water.

// Move r--.

// STEP-4: Termination
// After loop ends, output total water.

// ✅ Compact C++ Code
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cout<<"Size: ";cin>>n;
    vector<int>h(n);cout<<"Heights: ";
    for(int i=0;i<n;i++) cin>>h[i];
    int l=0,r=n-1,leftMax=0,rightMax=0,water=0;
    while(l<=r){
        if(h[l]<=h[r]){
            if(h[l]>=leftMax) leftMax=h[l];
            else water+=leftMax-h[l];
            l++;
        }else{
            if(h[r]>=rightMax) rightMax=h[r];
            else water+=rightMax-h[r];
            r--;
        }
    }
    cout<<"Total Water Trapped = "<<water;
}
