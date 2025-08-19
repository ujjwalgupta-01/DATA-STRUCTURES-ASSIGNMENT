#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, result = "";
    cout << "ENTER THE STRING ->";
    getline(cin, s);
    int n = s.length();
    cout << "GIVEN STRING -> " << s << endl;

  
    for (int i = 0; i < n; i++) {
      if(s[i]>='A' && s[i]<='Z'){
        s[i]+=32;
      }
    }
              
            cout<<"THE STRING ->"<<s;
}
            
        
        
    