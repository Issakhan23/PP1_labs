//314 pi
#include <iostream>
using namespace std;
int main() {
    string n;
    int c, k = 0, j = 0, d, sum;
    cin >> n;
    c = n.size();
    for (int i = 0; i < c; ++i) {
        d = n[i] - '0';
        if(i % 2 == 0) {
            k = k + d;
        } else {
            j = j + d;
        }
    }
    sum = j - k;
    cout << sum;

    
    return 0;
}