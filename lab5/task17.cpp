//517
#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    if (n >= 8 or m >= 8) {
        cout << "Impossible";
    } else {
        string a[8][8];
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                a[i][j] = "*";
                if (i == n and j == m) {
                    a[i][j] = "1";
                }
                if ((i == n or j == m) and not (i == n and j == m)) {
                    a[i][j] = "2";
                }
                for (int k = -8; k < 8; ++k) {
                    if (((i == n + k and j == m + k) or (i == n - k and j == m + k)) and not (i == n and j == m)) {
                        a[i][j] = "2";
                    }
                }
            }
        }



        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}