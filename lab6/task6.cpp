//606
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    char x;
    int n, count = 0;
    cin >> s >> x >> n;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == x) {
            count += 1;
        }
    }
    
    if(count == n) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}