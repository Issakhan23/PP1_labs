//601
#include <iostream>
using namespace std;
int main() {
    char n, m;
    cin >> n;
    if ((int(n) >= 65) and (int(n) <= 90)) {
        m = n;
    } else {
        m = char(int(n) - 32);
    }
    cout << m;
    return 0;
}