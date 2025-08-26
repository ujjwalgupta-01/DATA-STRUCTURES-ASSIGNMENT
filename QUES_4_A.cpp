#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1,s2;
    cout<<"ENTER THE FIRST STRING ->";
    getline(cin,s1);
    cout<<"ENTER THE SECOND STRING ->";
    getline(cin,s2);
    string s3=s1+s2;
    cout<<"NEW STRING = "<<s3;

}