#include <iostream>
#include <cmath>
using namespace std;

int removeDuplicates(int arr[], int n) {
    int newSize = n;

    for (int i = 0; i < newSize; i++) {
        for (int j = i + 1; j < newSize; ) {
            if (arr[i] == arr[j]) {
              
                for (int k = j; k < newSize - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                newSize--; 
            } else {
                j++;
            }
        }
    }

    return newSize;
}

int main() {
    int arr[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int newSize = removeDuplicates(arr, n);

    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < newSize; i++)
        cout << arr[i] << " ";

 
}
