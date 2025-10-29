//718 DectoHex.
#include <iostream>
using namespace std;

void DecToHex(int x) {
    string base = "0123456789ABCDEF", res = "";
    while (x > 0) {
        res = base[x % 16] + res;
        x = x / 16;
    }
    cout << res;
}


int main() {
    int x;
    cin >> x;

    DecToHex(x);
    
    return 0;
}