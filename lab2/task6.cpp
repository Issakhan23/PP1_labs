//206
#include <iostream>
using namespace std;
int main() {
    int n;
    int m;
    cin >> n;
    cin >> m;
    if (n == m) {
        cout << "0";
    } else if (n > m) {
        cout << "1";
    } else {
        cout << "2";
    }
    return 0;
}