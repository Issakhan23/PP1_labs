//214
#include <iostream>
using namespace std;
int main() {
    int N;
    int c = 0;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        c += i;

    }
    cout << c;
    return 0;
}