//508
#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }




    bool isPerfect = true;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i][j] !=  a[j][i]) {
                isPerfect = false;
            }
        }
    }



    if (isPerfect) {
        cout << "Perfect.";
    } else {
        cout << "Not perfect.";
    }
    return 0;
}