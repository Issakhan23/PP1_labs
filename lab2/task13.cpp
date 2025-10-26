//213
#include <iostream>
using namespace std;
int main() {
    int a;
    int b;
    int c;
    cin >> a;
    cin >> b;
    cin >> c;
    if ((a + b + c >= 70) and (a + b >= 30) and (c >= 20)) {
        cout << "YES!";
    } else {
        cout << "NO.";
    }
    return 0;
}