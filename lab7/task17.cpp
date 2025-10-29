//717 Ali
#include <iostream>
#include <string>
using namespace std;

string strToBool(string s) {
    if (s.size() == 1 and s[0] == '1') {
        return "true";
    } else if (s.size() == 1 and s[0] == '0') {
        return "false";
    } else {
        return s;
    }
    
}

int main() {
    string s;
    cin >> s;

    cout << strToBool(s);

    return 0;
}
