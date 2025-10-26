//403
#include <iostream>
using namespace std;
int main() {
    int c = 0;
    unsigned int n;
    cin >> n;
    int x[n];
    for(int i = 0; i < n; ++i) {
        cin >> x[i];
        if (x[i] > 0) {
            c += 1;
        }
    }
    cout << c;


    return 0;
}