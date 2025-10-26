//215
#include <iostream>
using namespace std;
int main() {
    long N = 0; // amount of num
    long j = 0; // numbers
    long c = 0; // sum of all numbers
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        cin >> j;
        c += j;
    }
    
    cout << c <<'\n';
    return 0;
}