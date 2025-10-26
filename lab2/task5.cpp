//205
#include <iostream>
using namespace std;
int main() {
int m;    
cin >> m;
if (m == 0 || m % 2 == 0) {
    cout << "EAGLE";
} else if (m % 2 == 1) {
    cout << "TAILS";
} else {
    cout << "NONE";
}
return 0;
}