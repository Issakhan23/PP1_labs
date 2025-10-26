//610
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    string x;
    cin >> s >> x;

    string temp = "";

    while(temp.size() < x.size()){
        temp += s;
    }
    
    if (temp == x) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    

    return 0;
}