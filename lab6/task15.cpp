//615
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    string a;
    getline(cin, a);
    for (int i = 0; i < a.size();) {
        if ((a[i] == 'a') || (a[i] == 'e') || (a[i] == 'i') || (a[i] == 'o') || (a[i] == 'u') || (a[i] == 'A') || (a[i] == 'E') || (a[i] == 'I') || (a[i] == 'O') || (a[i] == 'U')) {
            a.erase(i, 1);
        } else {
            i++;
        }
    }
    cout << a;
    return 0;
}