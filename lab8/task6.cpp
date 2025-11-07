//806 Most Frequent Element-2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int maxcount = 1, count = 1;
    int t = v[0], f = v[0];
    for (int i = 1; i < n; ++i) {
        if (t == v[i]) {
            count += 1;
        } else {
            if (count > maxcount) {
                maxcount = count;
                f = t;
            }
            
            
            t = v[i];
            count = 1;
        }
    }

    if (count > maxcount) {
        maxcount = count;
        f = t;
    }

    cout << f << endl;

    return 0;
}