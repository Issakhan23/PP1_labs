//310
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, j, c = 0;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> j;
        while (j > 0) {
            if (j % 10 == 0) {
                c = c + 1;
            }
            j = j / 10;
        }
    }
    cout << c;
    return 0;
}