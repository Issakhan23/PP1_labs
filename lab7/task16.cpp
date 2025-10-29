//716 Valid string - 2
#include <iostream>
#include <string>
using namespace std;

void f(string s, int n) {
    int count = 0;
    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] >= '0' && s[i] <= '9') {
            count++;
            if (count >= n) {
                cout << "Valid" << endl;
                return;  
            }
        } else {
            count = 0;  
        }
    }
    cout << "Not valid" << endl;
}

int main() {
    string s;
    int n;
    cin >> s >> n;
    f(s, n);
    return 0;
}