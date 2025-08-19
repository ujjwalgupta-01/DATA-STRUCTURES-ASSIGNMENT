#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"enter size of array->";
    cin>>n;
    

    
for(int j=0;j<n;j++){
     for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;   
        }
    }
        
}

    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    int x=n;
        for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            arr[i]=0;
            x--;
            }
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]!=0)
        cout<<arr[i]<<" ";
    }

return 0;
}