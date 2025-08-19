#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, result = "";
    cout << "ENTER THE STRING ->";
    getline(cin, s);
    int n = s.length();
    cout << "GIVEN STRING -> " << s << endl;

    for(int j=0;j<n;j++){
    for (int i = 0; i < n-1; i++) {
            if(s[i]>s[i+1]){
                char temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
            }
        }
        
    }
    cout<<"THE SORTED STRING ->"<<s;
}