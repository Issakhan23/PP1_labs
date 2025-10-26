//218
#include <iostream>
using namespace std;
int main() {
    long N = 0; 
    long j; 
    long c; 
    cin >> N;
    cin >> c;
    for (int i = 2; i <= N; ++i) {
        cin >> j;
        if (j > c) {
            c = j;
        }
        
    }
    
    cout << c <<'\n';
    return 0;
}