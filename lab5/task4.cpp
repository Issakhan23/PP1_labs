//504
#include <iostream>
using namespace std;
int main() {
    int n;
    int pos = 0, sop = 0;
    cin >> n;
    int a[n][n];


    int max = -1000000001;


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
            // pos = i + 1;
            // sop = j + 1;
        }
    }
    

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) {
                // cout << a[i][j] << " ";
                if (a[i][j] > max) {
                    max = a[i][j];
                    pos = i + 1;
                    sop = j + 1;
                }
            }
        }
    }
    cout << "Maximum element is: " << max << " with coordinates: " << pos << ";" << sop << endl;

    return 0;
}