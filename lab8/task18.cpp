//818 Strings 

#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    map<string, int> first;
    
    for (int i = 0; i < n; ++i) {
        if (first.find(p[i]) == first.end()) {
            first[p[i]] = i + 1;
        }
    }    

    for (map<string, int>::iterator it = first.begin(); it != first.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }


    return 0;
}