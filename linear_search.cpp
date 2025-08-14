#include <iostream>
using namespace std;
int Linearsearch(int n[], int key, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (n[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int size, key;
    cout << "Enter the size of the array: ";
    cin >> size;
    int n[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> n[i];
    }
    cout << "Enter the key to search: ";
    cin >> key;
    int result = Linearsearch(n, key, size);

    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }
    return 0;
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