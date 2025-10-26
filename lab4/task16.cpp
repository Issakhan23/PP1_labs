//416
#include <iostream>
using namespace std;
int main() {
    unsigned int n;
    int c = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }


    for (int i = 0; i < n; ++i) {
        if ((a[i] % 7 == 0 or a[i] % 17 == 0 or a[i] % 27 == 0 or a[i] % 37 == 0 or a[i] % 47 == 0) and (a[i] % 10 != 0)) {
            c++;
        }
    }
    cout << c;

    return 0;
}