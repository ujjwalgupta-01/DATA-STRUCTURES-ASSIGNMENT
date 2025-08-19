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
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
            result += s[i];
        }
    }
    cout << "STRING WITHOUT VOWELS -> " << result << endl;


}
