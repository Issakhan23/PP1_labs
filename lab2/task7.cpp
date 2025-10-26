//207
#include <iostream>
using namespace std;
int main() {
int m;
int a;
int b;
int c;
int d; 
int e;
int f;
cin >> m;
a = m / 1000;
b = m % 1000;
c = b / 100;
d = b % 100;
e = d / 10;
f = d % 10;
if (a == f && c == e) {
    cout << "YES";
} else {
    cout << "NO";
}
return 0;
}