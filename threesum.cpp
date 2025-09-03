#include <iostream>
using namespace std;

int threesum(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == key) {
                    cout << "The sum is " << arr[i] << "+" << arr[j] << "+" << arr[k] << " = " << key << endl;
                    return 1;
                }
            }
        }
    }
    return -1;
}

int main() {
    int n, key;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter the sum: ";
    cin >> key;
    
    int result = threesum(arr, n, key);
    if (result != -1)
        cout << "Sum found..";
    else+r
        cout << "Sum not found..";
        
    return 0;
}
