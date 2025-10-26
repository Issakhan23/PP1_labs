//212
#include <iostream>
using namespace std;
int main() {
int a;
int b;
float c;
cin >> a;
cin >> b;
c = 0.8 * a;
if (b > int(c)) {
    cout << "YES";
} else {
    cout << "NO";
}
return 0;
}