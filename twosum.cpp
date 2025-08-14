#include <iostream>
using namespace std;

bool twoSum(int a[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == target) {
                cout << "Pair: " << a[i] << " + " << a[j] << " = " << target;
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n, target;
    cout << "Enter size: ";
    cin >> n;
    int a[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter target sum: ";
    cin >> target;

    if (!twoSum(a, n, target))
        cout << "No pair exists.";
}


// 📌 Algorithm Name: Two Sum Algorithm

// 📖 Definition (Short):
// Two Sum checks whether any two numbers in an array add up to a given target value.

// 🔹 Input:

// n → number of elements in the array

// a[] → array elements

// target → required sum

// 🔹 Output:

// Indices or elements that add up to the target

// Message if no such pair exists

// 🛠 Algorithm (5 Steps):

// Read n, array a[], and target.

// Loop i from 0 to n-1.

// Loop j from i+1 to n-1.

// If a[i] + a[j] == target, print the pair and stop.

// If no pair found after loops, print “No pair exists.”