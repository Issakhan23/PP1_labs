//607
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string a, b;
    cin >> a;
    b = a;
    reverse(a.begin(), a.end());
    if (a == b) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}