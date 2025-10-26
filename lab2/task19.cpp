//219
#include <iostream>
#include <climits>
using namespace std;
int main() {
    long N = 0; // amount of num
    long j = 0; // numbers
    long c = LONG_MIN; 
    long p = 0;
    cin >> N;  

    
    for (int i = 1; i <= N; ++i) {
        cin >> j;
        
        if (j > c) {
            c = j;
            p = i;
        }
    
    }
    
    cout << p <<'\n';
    return 0;
}