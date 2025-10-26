//602
#include <iostream>
using namespace std;
int main() {
    string a;
    string b;
    cin >> a >> b;
    if (a.find(b) != string :: npos) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    
    return 0;
}