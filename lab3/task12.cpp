//312
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x, sum = 0;
    string sx; 
    cin >> sx;
    // string r = " ";
    // while (x / 10) {
    //     k = t;
    //     t = (x % 10);
    //     x = x / 10;
    // }
    
    // cout << x << " " << t << " " << k << endl;

    for (int a = sx.size() - 1; a >= 0; a = a - 1) {
        sum = sum + pow(2, a) * int(sx[sx.size() - 1 - a] - '0');
    }
    
    cout << sum;

    
    
    return 0;
}