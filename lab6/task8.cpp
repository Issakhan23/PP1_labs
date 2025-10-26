//608
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    string a, b;
    cin >> a;
    char t = a[0];
    a += t;
    b = a;
    reverse(a.begin(), a.end());
    if (a == b) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}