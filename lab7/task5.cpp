//705 Is a Number Usual?
#include <iostream>
#include <string>
using namespace std;

bool isUsual(int x) {
    bool Work;
    while (x % 5 == 0) {
        x /= 5;
        if (x == 1) {
            Work = true;
        } else {
            Work = false;
        }
    }
    while (x % 3 == 0) {
        x /= 3;
        if (x == 1) {
            Work = true;
        } else {
            Work = false;
        }
    }
    while (x % 2 == 0) {
        x /= 2;
        if (x == 1) {
            Work = true;
        } else {
            Work = false;
        }
    }

    if (Work == true) {
        return 1;
    } else {
        return 0;
    }
    
}

int main() {
    int x;
    cin >> x;
    
    if(isUsual(x) == 1) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}