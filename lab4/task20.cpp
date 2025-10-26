//420
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    cin >> x;

    if (x <= 1) {
        cout << "No" << endl;
        return 0;
    }

    bool isPrime = true;

    for (int i = 2; i <= sqrt(x); ++i) {
        if (x % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}