//211
#include <iostream>
using namespace std;
int main() {
int a;
int b;
int c;
cin >> a;
cin >> b;
cin >> c;

if ((a + b > c) and (a + c > b) and (b + c > a) and ((a == b) or (a == c) or (b == c))) {
    cout << "YES";
} else {
    cout << "NO";
}
return 0;
}