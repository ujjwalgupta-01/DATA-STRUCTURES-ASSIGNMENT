 #include<iostream>
#include<cmath>
using namespace std;
int main(){
    int arr[]={1,1,2,2,4,5,6,6};
     for(int i=0;i<8;i++){
            cout<<arr[i]<<" ";
        }
    int n;
    for(int i=0;i<8;i++){
      for (int j=1;j<8;j++){
        if (arr[i]=arr[j]){
            for(int k=j;k<7;k++){
                arr[k]=arr[k+1];
            }
           
        }
        else j++;
      }
        }

        for(int i=0;i<8;i++){
            cout<<arr[i]<<" ";
        }


        }