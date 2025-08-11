#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"ENTER THE SIZE OF ARRAY :";
    cin>>n;
    cout<<"ENTER THE elements OF ARRAY :";
for(int i=0;i<n;i++){
        cin>>arr[i];
}

    int x=0;
    for(int i=1;i<n;i++){
        if(arr[x]!=arr[i]){
            x=x+1;
            arr[x]=arr[i];
        }

    }
    int newLength=x+1;
    cout<<"NEW ARRAY IS :-";
    for(int i=0;i<newLength;i++)
    cout<<arr[i]<<" ";

}