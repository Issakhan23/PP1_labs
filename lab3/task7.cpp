//307
#include <iostream>
using namespace std;
int main() {
    int a, c = 0;
    cin >> a;
    while (a > 0) {
        
        if (a % 2 == 1) {
            c += 1;       
        }
        a = a / 2;
    }
    cout << c;
    
    return 0;
}