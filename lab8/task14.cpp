//814 Addition 

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    set<int> s;
    int t = v[0] + v[1];
    s.insert(t);
    for (int i = 2; i < n; ++i) {
        int t = v[i] + v[i - 1];
        s.insert(t);
    }
    
    cout << s.size();
    return 0;
}