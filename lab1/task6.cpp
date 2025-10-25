//106
#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int b = a % 100;
    int d = b % 10;
    int c = a / 100;
    cout << c << " " << d;
    return 0;
}