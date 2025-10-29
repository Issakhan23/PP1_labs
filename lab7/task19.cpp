//719 Bonapity-5
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char normalizeChar(char c) {
    c = tolower(c);
    if (c == 'b' || c == 'p') {
        return 'b';
    } else if (c == 'i' || c == 'e') {
        return 'i';
    }
    return c;
}

bool areSimilarInArabic(const string &s1, const string &s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    for (size_t i = 0; i < s1.length(); i++) {
        if (normalizeChar(s1[i]) != normalizeChar(s2[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    
    string results[T]; // Array to store results
    
    for (int i = 0; i < T; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        if (areSimilarInArabic(s1, s2)) {
            results[i] = "Yes";
        } else {
            results[i] = "No";
        }
    }
    
    // Print all results at the end
    for (int i = 0; i < T; i++) {
        cout << results[i] << endl;
    }
    
    return 0;
}