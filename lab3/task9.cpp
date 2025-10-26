//309
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x, c = 0;
    string y = "", z = "01";
    cin >> x;
    

    while (x > 0) {
        y = z[x % 2] + y ;
        x /= 2;
    }
    while (y.size() != 7) {
        y = "0" + y;
    }
    int i = y.size() - 1;
    while (y[i] == '0') {
        c = c + 1;
        i = i - 1;
        if (i < 0) break;
    }
   
    cout << c;
    return 0;
}