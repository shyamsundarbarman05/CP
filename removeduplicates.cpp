 #include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        int k = 0; // pointer to last unique element
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[k]) {
                k++;
                nums[k] = nums[i];
            }
        }
        return k + 1; // new size of array without duplicates
    }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    int newSize = sol.removeDuplicates(nums);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
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