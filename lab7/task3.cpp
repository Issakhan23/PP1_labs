//703 Positive number
#include <iostream>
#include <string>
using namespace std;

int posit(int a) {
    if (a >= 0) {
        int c = a;
        return c;
    } else {
        int c = -1 * a;
        return c;
    }
    
}


int main() {
    int a, c;
    cin >> a;
    cout << posit(a);

    return 0;
}