//407
#include <iostream>
using namespace std;
int main() {
    int n = 0, l, r;
    long long  sum = 0;
    cin >> n >> l >> r;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if ((i >= l - 1) && (i <= r - 1)) {
            sum = sum + a[i];
        }
    }
    cout << sum;

    return 0;
}