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




// 📌 Algorithm Name: Linear Search Algorithm

// 📖 Definition:
// Linear Search is a simple searching technique used to find the position of a specific element (key) in an array by checking each element one by one from start to end until the element is found or the array ends.

// 🔹 Input:

// size → number of elements in the array

// n[] → array elements

// key → element to be searched

// 🔹 Output:

// Index position of the key if found

// Message “Element not found” if the key is not present

// 🛠 Steps:

// Step 1: Start

// Step 2: Input size (number of elements in the array).

// Step 3: Declare an array n[size].

// Step 4: Input the elements of the array.

// Step 5: Input key (element to search).

// Step 6: Set i = 0.

// Step 7: Repeat until i < size

// If n[i] == key → Return index i (element found).

// Else → Increment i.

// Step 8: If end of array is reached without finding the key → Return -1 (element not found).

// Step 9: Display result:

// If index is not -1 → print position.

// Else → print “Element not found.”

// Step 10: Stop