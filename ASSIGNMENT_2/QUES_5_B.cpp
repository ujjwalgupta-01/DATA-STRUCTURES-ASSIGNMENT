#include<iostream>
using namespace std;
int  main(){
    // int a,b;
    int arr[100][100];

    int r;
    cout<<"ENTER THR NO. OF ROWS ->";
    cin>>r;
    int c;
    cout<<"ENTER THR NO. OF columns ->";
    cin>>c;
    for(int i=0; i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int count=0;
    for(int i=0; i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                count=arr[i][j];
            }
            else if((i-j)==1 || (i-j)==-1){
                count=arr[i][j];
            }
            else arr[i][j]=0;
        }
    }
    for(int i=0; i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}