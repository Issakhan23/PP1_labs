//614
#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;
    cin >> a;

    char t = a[0], f = a[0];
    size_t c = 1, s = 1;

    for (size_t i = 1; i < a.size(); ++i) {
        if (a[i] == t) {
            c += 1;
        } else {
            if (c > s) {
                s = c;
                f = t;
            }
            t = a[i];
            c = 1;
        }
    }

    if (c > s) {
        s = c;
        f = t;
    }

    cout << f << " " << s;
    return 0;
}