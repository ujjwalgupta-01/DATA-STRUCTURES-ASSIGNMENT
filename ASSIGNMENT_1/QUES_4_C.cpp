#include<iostream>
using namespace std;
int  main(){
    // int a,b;
    int arr[100][100];

    int rows;
    cout<<"ENTER THE NO. OF ROWS ->";
    cin>>rows;
    int columns;
    cout<<"ENTER THE NO. OF columns ->";
    cin>>columns;
    cout<<"ENTER THE ELEMENTS ->";
    for(int i=0; i<rows;i++){
        for(int j=0;j<columns;j++){
            // cout<<"ENTER "<<i<<"th element ->";
         
            cin>>arr[i][j];
            
        }
    }
    cout<<"GIVEN MATRIX :-"<<endl;
    for(int i=0; i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
       
}
cout<<"TRANSPOSE OF MATRIX :-"<<endl;

for(int j=0;j<columns;j++){
    for(int i=0; i<rows;i++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    
}

}