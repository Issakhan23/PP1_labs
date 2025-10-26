//603
#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    string base = "0123456789ABCDEF";
    string res = "";

    while (x > 0) {
        res = base[x % 16] + res;
        x = x / 16;
    }
    cout << res;

    return 0;
}