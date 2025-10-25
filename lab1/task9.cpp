//109
#include <iostream>
using namespace std;
int main() {
    int h;
    int m;
    int t;
    cin >> h;
    cin >> m;
    cin >> t;
    int x = (h/m) * t;
    cout << x;

    return 0;
}