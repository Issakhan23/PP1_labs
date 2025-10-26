//612
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int t = int(s[0]);
    
    for (int i = 0; i < s.size(); ++i) {
        if (int(s[i]) > t) {
            t = int(s[i]);
        }
    }
    cout << char(t);

    return 0;
}