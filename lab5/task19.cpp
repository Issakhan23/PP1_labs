//519 christmas tree
#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        m = n + i;
    }
    string a[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            a[i][j] = ".";
            if (j == (m - 1) / 2) {
                a[i][j] = "*";
            }
            if (j >= (((m - 1) / 2) - i) and (j <= (i + ((m - 1) / 2)))) {
                a[i][j] = "*";
            }
            if (i == n - 1) {
                a[i][j] = "*";
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}