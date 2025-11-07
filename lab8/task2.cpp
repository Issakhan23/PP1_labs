//802 Infinite Min to Max
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    int n;
    
    while (cin >> n) {
        v.push_back(n);
    }
    int t = v[0];
    int d = v[0];
    for (int i = 1; i < v.size(); ++i) {
        if (v[i] > d) {
            d = v[i];
        }
    }
    for (int i = 1; i < v.size(); ++i) {
        if (v[i] < t) {
            t = v[i];
        }
    }
    
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == t) {
            v[i] = d;
        }
        cout << v[i] << " ";
    }


    return 0;
}