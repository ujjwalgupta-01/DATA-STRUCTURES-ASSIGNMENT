#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int arr[100];
        int n;
        cout<<"ENTER THE SIZE OF ARRAY :";
    cin>>n;
    cout<<"ENTER THE ELEMENTS OF ARRAY :";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"THE MATRIX IS :-";
    for(int i=0;i<n;i++){

        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x=0;
    cout<<"REVERSE MATRIX IS :-";
    int br;
    for(int i=(n-1);i>=0;i--){
       br=arr[i];
       cout<<br<<" ";
    }
    
}