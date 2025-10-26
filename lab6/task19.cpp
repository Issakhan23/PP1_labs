//619
#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string a;
    int e;
    cin >> e;

    for ( int i = 0; i < e;i++) {
        cin >> a;
            if (a.find("@gmail.com") != string::npos) {
                for (int t = 0;t < a.size();t++) {
                    if (a[t] == '@') {
                        break;
                    }
                    cout << a[t];
                }
                cout << endl;
            }
    }

    return 0;
}