//611
#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    char t = 'z';
    char f = 'a';

    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] == t) {
            s[i] = f;
        } else {
            s[i] = char(int(char(s[i])) + 1);
        }
    }
    cout << s;
   
    return 0;
}