//315
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    string r = "", k = "0123456789ABCDEF";
    cin >> n;
    while (n > 0) {
        r = k[n % 16] + r;
        n = n / 16;
    }
    cout << r;

    return 0;
}