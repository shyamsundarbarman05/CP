#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key)
{
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] < key)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return -1;
}

int main()
{
    int n, key;
    cout << "Enter size: ";
    cin >> n;
    int a[n];
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter key to search: ";
    cin >> key;

    int pos = binarySearch(a, n, key);
    if (pos != -1)
        cout << "Element found at index " << pos;
    else
        cout << "Element not found";
}




// 📌 Algorithm Name: Binary Search Algorithm

// 📖 Definition:
// Binary Search finds an element in a sorted array by repeatedly dividing the search range in half until the element is found or not present.
// 🔹 Input:

// n → number of elements in the array (sorted)

// a[] → sorted array elements

// key → element to be searched

// 🔹 Output:

// Index position of the key if found

// “Element not found” if the key is not present

// 🛠 Algorithm (5 Steps):

// Start with low = 0 and high = n - 1.

// Find mid = (low + high) / 2.

// If a[mid] == key, return mid (found).

// If a[mid] < key, set low = mid + 1; else set high = mid - 1.

// Repeat steps 2–4 until low > high, then return -1 (not found).