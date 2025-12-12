// 904 Number of entries
// Given n integer numbers and the number k. You need to count how many times k occurs in the given array.

#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n, k, c = 0;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (v[i] == k) {
            c++;
        }
    }    

    cout << c;

    return 0;
}