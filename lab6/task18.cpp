//618
#include <iostream>
using namespace std;
int main() {
     string s;
    int n = 0;
    cin >> s;
    bool isAlphabet;
    for (size_t i = 0; i < s.size() - 1; ++i) {
        if ( int(char(s[i])) + 1 == int(char(s[i + 1])) ) {
            isAlphabet = true;
        } else if (int(char(s[i])) == int(char(s[i + 1]))) {
            isAlphabet = true;
        } else {
            isAlphabet = false;
            break;
        }
    }
    
    if (isAlphabet == true) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}