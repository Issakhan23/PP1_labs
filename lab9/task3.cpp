// 903 Specific sorting
// Given a sequence of pair<int, int>, it is required to display the positions of elements of this sequence in ascending order based on the sum of first + second values in its pairs.



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for(int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({a+b, i});
    }
    sort(v.begin(), v.end());

    for (auto p : v) {
        cout << p.second << " ";
    }
    
    return 0;
}