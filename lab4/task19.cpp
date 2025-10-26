//419
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x, n;
    cin >> x;
    n = sqrt(x);
    bool isSquare;
    if (x == 0 or x == 1) {
        isSquare = true;
    } else if (n * n == x) {
        isSquare = true;
    } else {
        isSquare = false;
    }

    if(isSquare == true) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}