//401
#include <iostream>
using namespace std;
int main() {
    unsigned int n;
    long s = 0;
    cin >> n;
    int x[n];
    for(int i = 0; i < n; ++i) {
        cin >> x[i];
        s = s + x[i];
    }
    cout << s;


    return 0;
}