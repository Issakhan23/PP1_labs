//609
#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    for (size_t i = 0; i < a.size(); ++i) {
        if (i % 2 == 0) {
            if ((size_t(char(a[i])) >= 97) and (size_t(char(a[i])) <= 122)) {
               a[i] = char(size_t(char(a[i])) - 32);
            } else {
                a[i] = a[i];
            }
        }
    }
    
    cout << a;
    return 0;
}