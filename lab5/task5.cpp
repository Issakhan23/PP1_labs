//505
#include <iostream>
using namespace std;
int main() {
    int n, t = 1;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            a[i][j] = t;
        }
        t = t + 2;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        
        cout << endl;
    }


    return 0;
}