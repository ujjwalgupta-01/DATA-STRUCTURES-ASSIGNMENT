#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;

    int j = 0; // index for placing unique elements

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {  // found a new unique value
            j++;
            arr[j] = arr[i];
        }
    }

    return j + 1; // new length of array without duplicates
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5,6,6,7,7,9,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newLength = removeDuplicates(arr, n);

    cout << "Array without duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
