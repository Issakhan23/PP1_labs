// 901 Sort in Reverse
// Given an array, sort it in descending order. Important: write a comparator and use it with sort() to achieve the result. Do not use sort() with reverse()!


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}