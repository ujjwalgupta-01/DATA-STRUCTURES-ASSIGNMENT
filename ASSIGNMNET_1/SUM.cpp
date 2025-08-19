#include <iostream>
#include<cmath>
using namespace std;
int main(){


    int arr[100][100];
    int n;
    int sum=0;
    
    int rows;
    cout<<"ENTER THR NO. OF ROWS ->";
    cin>>rows;
    int columns;
    cout<<"ENTER THR NO. OF columns ->";
    cin>>columns;
    for(int i=0; i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<"ENTER "<<i<<"th element ->";
            
            cin>>arr[i][j];
            
        }
    }
    for(int i=0; i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
        
        int sumRow=0;
        int sumCol=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                sumCol+=arr[i][j];
            }
            cout<<sumCol<<" ";
            cout<<endl;
        }
        for(int j=0;j<n;j++){
            for(int i=0;i<n;i++){
                sumRow+=arr[i][j];
            }
            cout<<sumRow<<" ";
        }
    }
}