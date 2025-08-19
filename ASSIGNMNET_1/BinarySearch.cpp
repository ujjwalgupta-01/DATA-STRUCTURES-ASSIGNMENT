#include <iostream>
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
    int result;
    
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
    cout<<"THE ELEMENT IS ON THE "<< result+1 <<"POSITION";
}