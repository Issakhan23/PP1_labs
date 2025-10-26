//503
#include <iostream>
using namespace std;
int main() {
    int n, t;
    cin >> n;
    int a[n][n];
    int max = -1000000001;
    int nedomax = -1000000001; 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];

            if (a[i][j] > max) {
                nedomax = max;
                max = a[i][j];
                
            } else if ((a[i][j] > nedomax) and (a[i][j] < max)) {
                nedomax = a[i][j];
            }
        }
    }
    if (nedomax == -1000000001) {
        t = 0;
    } else {
        t = nedomax;
    }

    cout << t;
    return 0;
}