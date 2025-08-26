#include <iostream>
<<<<<<< HEAD
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int s;
    cout<<"ENTER THE NO. TO SEARCH :";
    cin>>s;

    int left=0;
    int right=n-1;
    int mid=left+(right - left)/2;
    int result=-1;
    
  while(left<=right){
        if(s==arr[mid]){
            result=mid;
            break;

        }
        else if(arr[mid]>s){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    if(result!=-1)
    cout<<"THE ELEMENT IS ON THE "<< result+1 <<" POSITION";
    else
    cout<<"INVALID";
}
=======
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
    
    
>>>>>>> 76f0c79 (Initial commit)
