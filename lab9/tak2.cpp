// 902 Sorting again
// You have an array which consists of n integer numbers. Your task is to output all even numbers in decreasing order and then all odd numbers in increasing order.
// Important: write a comparator and use it with sort() to achieve the result.


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, counter = 0;
    cin >> n;
    vector<int> a(n);
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            b.push_back(a[i]);
            counter++;
        } else {
            c.push_back(a[i]);
        }
    }
    a.clear();
    sort(b.begin(), b.end(), greater<int>());
    sort(c.begin(), c.end());

    

    for (int i = 0; i < counter; ++i) {
        cout << b[i] << " ";
    }
    for (int i = 0; i < n - counter; ++i) {
        cout << c[i] << " ";
    }

    return 0;
}