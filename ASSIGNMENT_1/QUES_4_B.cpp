#include<iostream>
using namespace std;
int  main(){
    // int a,b;
    int arr[100][100];
    // int n=sizeof(arr)/4;
    int rows;
    cout<<"ENTER THE NO. OF ROWS ->";
    cin>>rows;
    int columns;
    cout<<"ENTER THE NO. OF columns ->";
    cin>>columns;
    cout<<"ENTER THE ELEMENTS :-";
    for(int i=0; i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>arr[i][j];
            
        }
    }
    
    
    int brr[100][100];
    // int n=sizeof(arr)/4;
    int rows1;
    cout<<"ENTER THE NO. OF ROWS OF 2ND MATRIX->";
    cin>>rows1;
    int columns1;
    cout<<"ENTER THE NO. OF columns OF 2ND MATRIX->";
    cin>>columns1;
    cout<<"ENTER elements ->";
    for(int i=0; i<rows1;i++){
        for(int j=0;j<columns1;j++){
            cin>>brr[i][j];
            
        }
        cout<<"1ST MATRIX :-"<<endl;
        for(int i=0; i<rows;i++){
            for(int j=0;j<columns;j++){
                cout<<arr[i][j]<<" ";
                
            }
            cout<<endl;
        }
    }
    cout<<"2ND MATRIX :-"<<endl;
    for(int i=0; i<rows1;i++){
        for(int j=0;j<columns1;j++){
            cout<<brr[i][j]<<" ";
            
        }
        cout<<endl;
    }
    
    
    
    int crr[100][100];
    for(int i=0; i<rows;i++){
        for(int j=0;j<columns1;j++){
            crr[i][j]=0;
        }
    }
    for(int i=0; i<rows;i++){
        for(int j=0;j<columns1;j++){
            for(int k=0;k<columns;k++){
                crr[i][j]+=arr[i][k]*brr[k][j];
            }
        }
}
cout<<"RESULTANT MATRIX :-"<<endl;
for(int i=0; i<rows;i++){
    for(int j=0;j<columns1;j++){
        
        cout<<crr[i][j]<<" ";
    }
    cout<<endl;
    
    
    
    
    
    
}
}