//702 Hypotenuse
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void f(int a, int b) {
    float c = sqrt(a*a + b*b);
    cout << setprecision(4) << c;
}

int main() {
    int a, b;
    cin >> a >> b;
    f(a, b);

    
    return 0;
}