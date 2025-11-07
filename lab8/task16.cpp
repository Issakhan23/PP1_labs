//816 2'nd min

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    map<int, int> freq;
    
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        freq[v[i]]++;
    }
    
    sort(v.begin(), v.end());

    int second_smallest = v[0];
    for (int i = 1; i < n; ++i) {
        if (v[i] > v[0]) {
            second_smallest = v[i];
            break;
        }
    }

    int c = freq[second_smallest];
    
    cout << c << endl;

    return 0;
}