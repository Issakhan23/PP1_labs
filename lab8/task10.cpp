//810 Set-freshman.

#include <iostream>
#include <set>

using namespace std;



int main() {
    set<int> s;
    int x, c = 0;
    while (cin >> x) {
        s.insert(x);
    }
    set<int> :: iterator it;
    for (it = s.begin(); it != s.end(); ++it) {
        c++;
    }
    cout << c << endl;

    return 0;
}