#include <iostream>
using namespace std;

int main(){
    int r, c;
    cout<<"ENTER THE NO. OF ROWS -> ";
    cin>>r;
    cout<<"ENTER THE NO. OF COLUMNS -> ";
    cin>>c;

    int arr[r][c];
    cout<<"ENTER THE ELEMENTS:\n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(i<j) arr[i][j] = 0;
        }
    }

    cout<<"LOWER TRIANGULAR MATRIX:\n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
