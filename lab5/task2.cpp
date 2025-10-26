//502
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n][n];
    int max = -1000000000;
    int pos = 0;
    int sop = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
            if (a[i][j] > max) {
                max = a[i][j];
                pos = i + 1;
                sop = j + 1;
            }
        }
    }
    

    cout << pos << " " << sop;
    return 0;
}