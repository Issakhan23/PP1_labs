//813 Boris and Passwords.

#include <iostream>
#include <set>
#include <string>
#include <cctype>

using namespace std;

bool isStrongPassword(const string& password) {
    bool hasUpper = false, hasLower = false, hasDigit = false;
    
    for (char c : password) {
        if (isupper(c)) hasUpper = true;
        else if (islower(c)) hasLower = true;
        else if (isdigit(c)) hasDigit = true;
    }
    
    return hasUpper && hasLower && hasDigit;
}

int main() {
    int N;
    cin >> N;
    
    set<string> strongPasswords;
    
    for (int i = 0; i < N; i++) {
        string password;
        cin >> password;
        
        if (isStrongPassword(password)) {
            strongPasswords.insert(password);
        }
    }
    cout << strongPasswords.size() << endl;
    
    for (const string& pwd : strongPasswords) {
        cout << pwd << endl;
    }
    
    return 0;
}