//311
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    bool isPow = false;
    
    
    for (int i = 0; i <= 30; ++i) {  
        if ((1 << i) == n) {
            isPow = true;
            break;
        }
    }
    
    if (isPow) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    return 0;
}