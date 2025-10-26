//604
#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); ++i) {
        if ((int(char(a[i])) >= 65) and (int(char(a[i])) <= 90)) {
            a[i] = a[i];
        } else {
            a[i] = char(int(char(a[i])) - 32);
        }
    }
    
    cout << a;
    return 0;
}