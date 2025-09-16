#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENTER THE SIZE OF SQUARE MATRIX -> ";
    cin>>n;

    int arr[n][n];
    cout<<"ENTER THE ELEMENTS:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    bool symmetric = true;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] != arr[j][i]){
                symmetric = false;
                break;
            }
        }
    }

    if(symmetric){
        cout<<"THE MATRIX IS SYMMETRIC\n";
    } else {
        cout<<"THE MATRIX IS NOT SYMMETRIC\n";
    }

    cout<<"MATRIX:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
