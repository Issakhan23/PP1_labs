//707 Percent of girls
#include <iostream>
using namespace std;

double f(double n, double m) {
    double k = ((m * 100) / n);
    return k;
}

int main() {
    double n, m;
    cin >> n >> m;
    cout << f(n, m);
    
    
    return 0;
}