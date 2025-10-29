//715 Valid string
#include <iostream>
#include <string>
using namespace std;

void Validation(string s, int count) {
    int c = 0;
    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] >= '0' and s[i] <= '9') {
            c++;
        }
    }
    if (c >= count) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

int main() {
    string s;
    int count;
    cin >> s >> count;

    Validation(s, count);

    return 0;
}
