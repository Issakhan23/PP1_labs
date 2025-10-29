//701

#include <iostream>
using namespace std;

int f(int a, int b) {
    int c = a + b;
    return c;
}

int main() {
    int a, b, c;
    cin >> a >> b;
    cout << f(a, b) << endl;

    
    return 0;
}