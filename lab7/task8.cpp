//708 Is It Prime?
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    bool Prime = true;
    if (n <= 1) {
        Prime = false;
    }
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            Prime = false;
            break;
        }
    }
    if (Prime == false) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    int n;
    cin >> n;
    if (isPrime(n) == 1) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}