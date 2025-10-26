//411
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    unsigned int n, m;
    cin >> n;
    long a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cin >> m;
    long b[m];
    int t = n + m;
    long mer[t];
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    for (int i = 0; i < n; ++i) {
        mer[i] = a[i];
    }
    for (int i = 0; i < m; ++i) {
        mer[n + i] = b[i];
    }

    // for (int k = 0; k < t - 1; ++k) {
    //     for (int l = 0; l < t - 1 - k; ++l) {
    //         if (mer[l] > mer[l + 1]) {
    //             long temp = mer[l];
    //             mer[l] = mer[l + 1];
    //             mer[l+1] = temp;
    //         }
    //     }
    // }

    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            mer[k++] = a[i++];
        } else {
            mer[k++] = b[j++];
        }
    }

    while (i < n) {
        mer[k++] = a[i++];
    }
    
    while (j < m) {
        mer[k++] = b[j++];
    }

    sort(mer, mer + t);

    for (int o = 0; o < t; ++o) {
        cout << mer[o] << " ";
    }



    return 0;
}