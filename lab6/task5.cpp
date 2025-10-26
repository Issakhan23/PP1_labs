//605





//1 method
/*
#include <iostream>
using namespace std;
int main() {
    int small = 0, capital = 0;
    string a;
    cin >> a;
    
    for (int i = 0; i < a.size(); ++i) {
        if (size_t(char(a[i])) >= 97 and size_t(char(a[i])) <= 122) {
            small += 1;
        } else if (size_t(char(a[i])) >= 65 and size_t(char(a[i])) <= 90) {
            capital += 1;
        }
    }
    cout << small << " " << capital;
    return 0;
}

*/

//2 method
#include <iostream>
using namespace std;
int main() {
    int small = 0, capital = 0;
    string a;
    cin >> a;
    
    for (int i = 0; i < a.size(); ++i) {
        if (size_t(char(a[i])) >= 97 and size_t(char(a[i])) <= 122) {
            small += 1;
        } else if (size_t(a[i]) >= 65 and size_t(a[i]) <= 90) {
            capital += 1;
        }
    }
    cout << small << " " << capital;
    return 0;
}