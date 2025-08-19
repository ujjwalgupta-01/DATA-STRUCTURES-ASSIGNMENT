#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // First loop - print original
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int x = n;

    // Remove duplicates by setting them to 0
    for (int i = 0; i < n - 1; i++) { // fixed bound to avoid out-of-range
        if (arr[i] == arr[i + 1]) {
            arr[i] = 0;
            x--; // decrement count for duplicate
        }
    }

    // Print array without zeros
    for (int a = 0; a < n; a++) {
        if (arr[a] != 0) {
            cout << arr[a] << " ";
        }
    }

    return 0;
}
