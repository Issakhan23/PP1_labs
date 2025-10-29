//704 Valid Number
#include <iostream>
#include <string>
using namespace std;

string validation(int a) {
    bool Work;
    string s = to_string(a);
    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] == '1' || s[i] == '3' || s[i] == '5' || s[i] == '7' || s[i] == '9') {
            Work = false;
            break;
        } else if (s[i] == '2' || s[i] == '4' || s[i] == '6' || s[i] == '8') {
            Work = true;
        }
    }
    if (Work == true) {
        return "Valid";
    } else {
        return "Not valid";
    }
    
}


int main() {
    int a;
    cin >> a;
    cout << validation(a);

    return 0;
}