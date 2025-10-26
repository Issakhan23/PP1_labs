//402
#include <iostream>
using namespace std;
int main() {
    unsigned int n;
    cin >> n;
    int x[n];
    for(int i = 0; i < n; ++i) {
        cin >> x[i];
        if (x[i] % 2 == 1) {
            cout << x[i] << " ";
        }
    }



    return 0;
}