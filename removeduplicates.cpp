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
