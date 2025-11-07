//812 Newbie. like without duplicates

#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n; 
    vector<int> v(n);


    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }


    set<int> s;

    for (int i = 0; i < n; ++i) {
        if (s.find(v[i]) == s.end()) {
            cout << "YES" << endl;
            s.insert(v[i]);
        } else {
            cout << "NO" << endl;
        }
    } 


    return 0;
}