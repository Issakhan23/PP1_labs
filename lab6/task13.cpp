//613
#include <iostream>
using namespace std;
int main() {
    string a;
    char b;
    cin >> a >> b;
    int pos = 0, c = 0;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == b) {
            c += 1;
            pos = i;
        } 
    }
    if (c == 1) {
        cout << pos;
    } else {
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] == b) {
                pos = i;
                cout << pos << " ";
                break;
            } 
        }
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] == b) {
                pos = i;
            } 
        }

        cout << pos;
    }
    
    return 0;
}