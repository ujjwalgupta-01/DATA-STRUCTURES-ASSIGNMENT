#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"enter size of array->";
    cin>>n;
    cout<<"ENTER THE NUMBER OF ELEMENTS ->";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"THE GIVEN ARRAY ->";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int j=0;j<n;j++){
     for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;   
        }
    }
        
}
    cout<<"THE SORTED ARRAY -> ";
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x;
    cout<<"ENTER THE NUMBER TO FIND ->";
    cin>>x;
    for(int i=0;i<n;i++){ 
        if(x==arr[i]){
            cout<<"NUMBER FOUND AT POSITION "<<i+1<<endl;
        }

    

    }

    }