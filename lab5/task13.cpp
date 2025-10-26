//513
#include <iostream>
using namespace std;
int main() {
    int n, t;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }



    for (int i = 0; i < n; ++i) {
        int max = a[i - 0][0];
        for (int j = 1; j < n; ++j) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
   


        for (int j = 0; j < n; ++j) {
             a[i][j] = max;
        }
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}