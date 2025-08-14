#include <iostream>
using namespace std;

bool twoSum(int a[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == target) {
                cout << "Pair: " << a[i] << " + " << a[j] << " = " << target;
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n, target;
    cout << "Enter size: ";
    cin >> n;
    int a[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter target sum: ";
    cin >> target;

    if (!twoSum(a, n, target))
        cout << "No pair exists.";
}
