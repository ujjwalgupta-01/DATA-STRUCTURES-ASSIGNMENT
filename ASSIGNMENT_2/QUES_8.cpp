#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[100];
    cout << "Enter the elements:\n";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    for(int i=0; i<n; i++) {
        int j;
        for(j=0; j<i; j++) {
            if(arr[i] == arr[j])
                break;
        }
        if(j == i)
            count++;
    }

    cout << "Total number of distinct elements: " << count << endl;
 
}