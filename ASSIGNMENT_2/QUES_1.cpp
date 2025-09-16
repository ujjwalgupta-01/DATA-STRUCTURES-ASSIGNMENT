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
        int left=0;
        int right=n-1;
        int result=0;
        int mid=left+(right-left)/2;
        int num;
        cout<<"enter the num to find :";
        cin>>num;

        while(left<=right){
            if(num==arr[mid]){
                result=mid;
                break;

            }
            else if(arr[mid]>num){
                right=mid-1;

            }
            else{
                left=mid+1;
            }
        }
        cout<<"element found at "<<result+1<<" position";

    }

    
    
    
