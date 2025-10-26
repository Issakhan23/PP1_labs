//512 1<<9
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, m, t;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];


            bool isSquare;
            t = sqrt(a[i][j]);
            if (a[i][j] == 0 or a[i][j] == 1) {
                isSquare =  true;
            } else if (a[i][j] == t * t) {
                isSquare = true;
            } else {
                isSquare = false;
            }
            if (isSquare == true) {
                a[i][j] = t;
            }
        }
    }
    


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << a[i][j] << " ";
        }
        
        cout << endl;
    }


    return 0;
}