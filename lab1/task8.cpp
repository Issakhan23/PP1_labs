//108
#include <iostream>
using namespace std;
int main() {
    int a;
    int b;
    int c;
    cin >> a;
    cin >> b;
    c = a;
    a = b;
    b = c;

    cout << a << " " << b;
    return 0;
}