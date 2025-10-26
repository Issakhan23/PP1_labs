//408
#include <iostream>
using namespace std;
int main() {
    unsigned short n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }

    for (int a = 0; a < n - 1; a++) {
        for (int b = 0; b < n - 1 - a; b++) {
            if (x[b] > x[b + 1]) {
                int t = x[b];
                x[b] = x[b + 1];
                x[b + 1] = t;
            }
        }
    }

    for (int j = n - 1; j >= 0; --j) {
        cout << x[j] << " ";
    }


    return 0;
}