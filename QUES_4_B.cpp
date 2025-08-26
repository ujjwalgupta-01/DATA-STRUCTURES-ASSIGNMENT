#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"ENTER THE STRING ->";
    getline(cin,s);
    int n=s.length();
    cout<<"GIVEN STRING -> "<<s<<endl;

    for(int i=0;i<n/2;i++){
        char temp=s[i];
        s[i]=s[n-1-i];
        s[n-1-i]=temp;
    }
    cout<<"REVERSED STRING ->"<<s;

}
