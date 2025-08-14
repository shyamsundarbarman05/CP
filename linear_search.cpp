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
