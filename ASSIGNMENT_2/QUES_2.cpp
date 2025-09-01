#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int arr[]={64,34,25,12,22,11,90};
    int n=sizeof(arr)/4;
    
    
    for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
    bool swap=false;

        if(arr[j]>arr[j+1]){
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
            swap=true;
            
        }
        if(!swap){
            break;
        }
    }
        
}
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
