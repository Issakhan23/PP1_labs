//414
#include <iostream>
using namespace std;
int main() {
    unsigned int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        a[i] *= a[i];
    }


    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
        
    }

    return 0;
}