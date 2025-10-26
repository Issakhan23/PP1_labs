//616
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

bool hasDigit(const string &word) {
    return find_if(word.begin(), word.end(), ::isdigit) != word.end();
}

int main() {
    string line;
    getline(cin, line);

    stringstream ss(line);
    string word;
    while (ss >> word) {
        if (!hasDigit(word)) {
            cout << word << "\n";
        }
    }

    return 0;
}