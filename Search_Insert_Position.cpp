#include<iostream>
using namespace std;

int searchIndex(int arr[], int n, int key) {
    // If key should be inserted before the first element
    if (key <= arr[0]) return 0;

    // Check middle positions
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < key && arr[i + 1] >= key) {
            return i + 1;
        }
    }

    // If key should be inserted after the last element
    return n;
}

int main() {
    int n, key;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array (sorted): ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter the key: ";
    cin >> key;

    int result = searchIndex(arr, n, key);
    cout << "The key should be inserted at index: " << result << endl;

    return 0;
}
