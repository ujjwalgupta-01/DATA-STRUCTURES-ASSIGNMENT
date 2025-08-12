#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int arr[100][100];
        int n;
    cout<<"ENTER THE SIZE OF ARRAY :";
    cin>>n;
    cout<<"ENTER THE ELEMENTS OF ARRAY :";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"THE MATRIX :- "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";   
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        int x=0; 
        int a=1;
        for(int j=0;j<n;j++){
            // if(i==0)
            x+=arr[i][j];
            a*=arr[i][j];
            // cout<<arr[i][j]<<" ";   
            
}
cout<<i+1 <<"ROW SUM ="<< x<<endl;
cout<<i+1 <<"ROW PRODUCT ="<< a;
cout<<endl;
}
cout<<endl;
for(int j=0;j<n;j++){
    int y=0; 
    int b=1;
         for(int i=0;i<n;i++){
            y+=arr[i][j];
            b*=arr[i][j];
        
        }
        cout<<j+1 <<"column sum ="<<y<<endl;
        cout<<j+1 <<"column product="<<y;
        cout<<endl;
    }
    }