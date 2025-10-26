//217
#include <iostream>
using namespace std;
int main() {
int n;
int c = 2;
cin >> n;

if ((n <= 0) or (n % 2 == 1)) {
    cout << "NO";
} else  {
    while (n % 2 == 0) {
        n /= 2;
    }
    if (n == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
} 
    return 0;
}