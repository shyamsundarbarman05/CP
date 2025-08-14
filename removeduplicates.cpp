#include <iostream>
using namespace std;

void removeDuplicates(int a[], int &n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; ) {
            if (a[i] == a[j]) {
                // Shift elements left
                for (int k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--; // Reduce size
            } else {
                j++; // Only move to next if no deletion
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int a[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    removeDuplicates(a, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
}

// 📌 Algorithm Name: Remove Duplicates from Array

// 📖 Definition (Short):
// This algorithm removes duplicate elements from an array by comparing each element with the rest and shifting elements left when a duplicate is found.

// 🔹 Input:

// n → number of elements in the array

// a[] → array elements

// 🔹 Output:

// Array with duplicates removed

// 🛠 Algorithm (5 Steps):

// Read n and array a[].

// For each element a[i] from index 0 to n-1:

// Compare it with every element after it (a[j]).

// If a duplicate is found, shift all elements after j one step left and reduce n by 1.

// Repeat until no duplicates remain, then print the updated array.