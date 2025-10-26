//308
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x, s = 0, a;
    string y = "", z = "10";
    cin >> x;
    
    // while (c.size() != 9) {
    //     c = "0" + c;
    // }
    while (x > 0) {
        y = z[x % 2] + y ;
        x /= 2;
    }
    while (y.size() != 9) {
        y = "1" + y;
    }
    
    
    for (int a = y.size() - 1; a >= 0; a = a - 1 ) {
        s = s + pow(2, a) * int(y[y.size() - 1 - a] - '0');
    }
    cout << s;
    
    return 0;
}