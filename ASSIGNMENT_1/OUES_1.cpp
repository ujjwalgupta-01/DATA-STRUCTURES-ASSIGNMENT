#include <iostream>
#include<cmath>
using namespace std;
int arr[100];
int n;
void create(){
     cout<<"ENTER SIZE OF ARRAY -> ";
     cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter "<<i<<"th element of array ->";
        cin>>arr[i];
    }
    
}
void display(){
    if(n==0){
        cout<<"NOT POSSIBLE ";
    }
    else
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

    }
    
}
void insert(){
    int pos,value;
    cout<<"ENTER THE POSITION OF ELEMENT ->";
    cin>>pos;
    cout<<"ENTER THE VALUE OF ELEMENT ->";
    cin>>value;
    
       for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
       }
       arr[pos]=value;
       n++;
}
void deleteElement(){
    int pos;
    cout<<"ENTER THE POSITION OF ELEMENT TO DELETE ->";
    cin>>pos;
    for(int i=pos;i<(n-1);i++){
        arr[i]=arr[i+1];
    }
    n--;
}
void linearSearch(){
    int s;
    cout<<"ENTER THE VALUE TO SEARCH ->";
    cin>>s;
    for(int i=0;i<n;i++){
    if(s==arr[i]){
        cout<<"ELEMENT IS AT THE "<<i<<"th position";
        break;
    }

    }

}
int main(){
    int num;
 while(true){
        cout << "  \n  MENU \n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter the operation : ";
        cin>>num;


        if (num == 1) {
            create();
        } else if (num == 2) {
            display();
            cout<<endl;
        } else if (num == 3) {
            insert();
        } else if (num == 4) {
            deleteElement();
        } else if (num == 5) {
            linearSearch();
        } else if (num == 6) {
            false;
            cout<<"THANKS FOR COMING :)";

 }
}
}