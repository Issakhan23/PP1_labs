//803 Pairs.
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    int n, t;
    
    while (cin >> n and n != 0) {
        v.push_back(n);
    }
    int num = v.size();
    for (int i = 0; i < num/2; ++i) {
        t = num - 1 - i;
        cout << v[i] + v[t] << " ";
    }
    if (num % 2 == 1) {
        cout << v[num/2] << " ";
    }

    return 0;
}