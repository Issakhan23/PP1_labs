//617
#include <iostream>

using namespace std;

int main(){
    string s;
    int n = 0;
    cin >> s;
    for (size_t i = 0; i < s.size(); ++i) {
        n += int(char(s[i]));
    }
    if (n > 300) {
        cout << "It is tasty!";
    } else {
        cout << "Oh, no!";
    }
   
    return 0;
}