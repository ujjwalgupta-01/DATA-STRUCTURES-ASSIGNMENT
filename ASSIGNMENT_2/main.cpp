#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix (n x n): ";
    cin >> n;

    // (a) Diagonal Matrix
    int diag[n];
    cout << "\nEnter Diagonal Matrix elements:\n";
    for(int i=0;i<n;i++) {
        cout << "A[" << i+1 << "][" << i+1 << "] = ";
        cin >> diag[i];
    }

    cout << "\nStored Diagonal Matrix (1D): ";
    for(int i=0;i<n;i++) cout << diag[i] << " ";
    cout << "\n";

    // (b) Tri-diagonal Matrix
    int D[n], U[n-1], L[n-1];
    cout << "\nEnter Tri-diagonal Matrix elements:\n";
    cout << "Main diagonal:\n";
    for(int i=0;i<n;i++) cin >> D[i];
    cout << "Upper diagonal:\n";
    for(int i=0;i<n-1;i++) cin >> U[i];
    cout << "Lower diagonal:\n";
    for(int i=0;i<n-1;i++) cin >> L[i];

    cout << "\nStored Tri-diagonal Matrix (3 arrays):\nMain: ";
    for(int i=0;i<n;i++) cout << D[i] << " ";
    cout << "\nUpper: ";
    for(int i=0;i<n-1;i++) cout << U[i] << " ";
    cout << "\nLower: ";
    for(int i=0;i<n-1;i++) cout << L[i] << " ";
    cout << "\n";

    // (c) Lower Triangular Matrix
    int sizeLower = n*(n+1)/2;
    int lower[sizeLower];
    cout << "\nEnter Lower Triangular Matrix elements:\n";
    int k=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            cout << "A[" << i+1 << "][" << j+1 << "] = ";
            cin >> lower[k++];
        }
    }

    cout << "\nStored Lower Triangular Matrix (1D): ";
    for(int i=0;i<sizeLower;i++) cout << lower[i] << " ";
    cout << "\n";

    // (d) Upper Triangular Matrix
    int sizeUpper = n*(n+1)/2;
    int upper[sizeUpper];
    cout << "\nEnter Upper Triangular Matrix elements:\n";
    k=0;
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            cout << "A[" << i+1 << "][" << j+1 << "] = ";
            cin >> upper[k++];
        }
    }

    cout << "\nStored Upper Triangular Matrix (1D): ";
    for(int i=0;i<sizeUpper;i++) cout << upper[i] << " ";
    cout << "\n";

    // (e) Symmetric Matrix
    int sizeSym = n*(n+1)/2;
    int sym[sizeSym];
    cout << "\nEnter Symmetric Matrix elements (lower triangle only):\n";
    k=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            cout << "A[" << i+1 << "][" << j+1 << "] = ";
            cin >> sym[k++];
        }
    }

    cout << "\nStored Symmetric Matrix (1D): ";
    for(int i=0;i<sizeSym;i++) cout << sym[i] << " ";
    cout << "\n";

    return 0;
}
