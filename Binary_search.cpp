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




