//413
#include <iostream>
using namespace std;
int main() {
    unsigned int n, m, po = 0;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < m) {
            po = i + 1;
        }
    }
    cout << po << " ";

    return 0;
}